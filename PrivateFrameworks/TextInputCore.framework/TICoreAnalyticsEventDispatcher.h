
@interface TICoreAnalyticsEventDispatcher : NSObject <TITypingSessionAggregatedEventObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;

@end
