
@interface PETProtobufRawDecoder : NSObject

+ (id)filterProtobufData:(id)arg1 onField:(id /* block */)arg2 onNestedMessageEnd:(id /* block */)arg3;
+ (id)filterProtobufData:(id)arg1 withWhitelist:(id)arg2;

@end
