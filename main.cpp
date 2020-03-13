#include <iostream>
#include "foo.pb.h"

int main()
{
    google::protobuf::Arena a;
    foo::Foo *array = google::protobuf::Arena::CreateArray<foo::Foo>(&a, 10);
    foo::Foo *message = google::protobuf::Arena::CreateMessage<foo::Foo>(&a, 10);
    return 0;
}
