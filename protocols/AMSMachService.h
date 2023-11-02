
@protocol AMSMachService <NSObject>

@required

+ (bool)isConnectionEntitled:(NSXPCConnection *)arg1;
+ (NSString *)machServiceName;
+ (NSXPCInterface *)serviceInterface;

@end
