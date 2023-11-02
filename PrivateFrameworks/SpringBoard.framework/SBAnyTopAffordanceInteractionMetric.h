
@interface SBAnyTopAffordanceInteractionMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    bool  _hasSentEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSentEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (bool)hasSentEvent;
- (void)setHasSentEvent:(bool)arg1;

@end
