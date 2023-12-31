
@protocol NSProgressPublisher <NSObject>

@required

- (oneway void)appWithBundleID:(NSString *)arg1 didAcknowledgeWithSuccess:(bool)arg2;
- (oneway void)cancel;
- (oneway void)pause;
- (oneway void)prioritize;
- (oneway void)resume;

@end
