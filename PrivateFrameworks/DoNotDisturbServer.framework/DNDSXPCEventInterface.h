
@interface DNDSXPCEventInterface : NSObject

+ (id)sharedInstance;

- (void)registerForStream:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (void)setEvent:(id)arg1 forKey:(id)arg2 onStream:(id)arg3;

@end
