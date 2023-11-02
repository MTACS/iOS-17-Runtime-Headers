
@interface SBCXPCServiceInterface : NSObject

+ (id)newListener;
+ (id)serviceClientInterface;
+ (id)serviceInterface;
+ (id)serviceName;

- (id)newServiceConnection;

@end
