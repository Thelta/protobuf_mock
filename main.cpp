#include <iostream>
#include "foo.pb.h"

int main()
{
    google::protobuf::Arena a;
    foo::Foo *array = google::protobuf::Arena::CreateArray<foo::Foo>(&a, 10);
    foo::Foo *foo = google::protobuf::Arena::CreateMessage<foo::Foo>(&a);
    return 0;
}
