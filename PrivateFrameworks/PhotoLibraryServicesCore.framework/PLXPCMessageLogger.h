
@interface PLXPCMessageLogger : NSObject <NSXPCConnectionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)enabled;

- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;

@end
