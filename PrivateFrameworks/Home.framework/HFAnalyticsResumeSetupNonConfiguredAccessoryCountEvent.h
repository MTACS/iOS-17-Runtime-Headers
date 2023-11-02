
@interface HFAnalyticsResumeSetupNonConfiguredAccessoryCountEvent : HFAnalyticsEvent {
    NSString * _homeID;
    NSNumber * _nonConfiguredAccessoryCount;
    NSNumber * _nonConfiguredBridgeCount;
    NSNumber * _nonConfiguredBridgedCount;
}

@property (nonatomic, retain) NSString *homeID;
@property (nonatomic, retain) NSNumber *nonConfiguredAccessoryCount;
@property (nonatomic, retain) NSNumber *nonConfiguredBridgeCount;
@property (nonatomic, retain) NSNumber *nonConfiguredBridgedCount;

- (void).cxx_destruct;
- (id)homeID;
- (id)initWithData:(id)arg1;
- (id)nonConfiguredAccessoryCount;
- (id)nonConfiguredBridgeCount;
- (id)nonConfiguredBridgedCount;
- (id)payload;
- (void)setHomeID:(id)arg1;
- (void)setNonConfiguredAccessoryCount:(id)arg1;
- (void)setNonConfiguredBridgeCount:(id)arg1;
- (void)setNonConfiguredBridgedCount:(id)arg1;

@end
