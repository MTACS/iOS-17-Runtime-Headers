
@interface TIDPEventDispatcher : NSObject <TITypingSessionAggregatedEventObserver> {
    <TIDPReportingDelegate> * _reportingDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithReportingDelegate:(id)arg1;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;

@end
