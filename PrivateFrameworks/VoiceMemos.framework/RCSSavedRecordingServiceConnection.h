
@interface RCSSavedRecordingServiceConnection : NSXPCConnection

+ (id)clientInterface;
+ (id)newConnection;
+ (id)serviceInterface;

@end
