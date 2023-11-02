
@protocol HMBAPSConnection <NSObject>

@required

- (<HMBAPSConnectionDelegate> *)delegate;
- (NSArray *)enabledTopics;
- (void)invalidateTokenForTopic:(NSString *)arg1 identifier:(NSString *)arg2;
- (void)requestTokenForTopic:(NSString *)arg1 identifier:(NSString *)arg2;
- (void)setDelegate:(id <HMBAPSConnectionDelegate>)arg1;
- (void)setEnabledTopics:(NSArray *)arg1;

@end
