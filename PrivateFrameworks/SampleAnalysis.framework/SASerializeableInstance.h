
@interface SASerializeableInstance : NSObject {
    <SASerializable> * _instance;
    bool  _populated;
}

- (void).cxx_destruct;

@end
