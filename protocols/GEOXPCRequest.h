
@protocol GEOXPCRequest <NSObject, GEOXPCSerializable>

@required

+ (Class)replyClass;

- (bool)isValid;
- (unsigned long long)reply;

@end
