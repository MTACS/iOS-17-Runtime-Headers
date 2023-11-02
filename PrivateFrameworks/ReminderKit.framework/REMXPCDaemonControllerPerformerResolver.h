
@interface REMXPCDaemonControllerPerformerResolver : NSObject

@property (nonatomic, readonly) NSString *name;

- (id)name;
- (void)resolveWithDaemon:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;

@end
