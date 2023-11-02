
@interface CPAnalyticsDevLogger : NSObject <CPAnalyticsDestination>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)disabled;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)processEvent:(id)arg1;
- (void)updateWithConfig:(id)arg1;

@end
