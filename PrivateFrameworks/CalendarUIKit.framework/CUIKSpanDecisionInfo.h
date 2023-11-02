
@interface CUIKSpanDecisionInfo : NSObject {
    bool  _proposeFuture;
    long long  _recurringEventCount;
    bool  _shouldRequestSpan;
}

@property (nonatomic) bool proposeFuture;
@property (nonatomic) long long recurringEventCount;
@property (nonatomic) bool shouldRequestSpan;

+ (bool)_allowSlicingEvent:(id)arg1 diffSummary:(id)arg2;
+ (bool)_shouldRequestForSpanWithDiffSummary:(id)arg1 recurringEventCount:(long long)arg2 significantlyDetachedRecurringEventCount:(long long)arg3;
+ (id)spanDecisionInfoForEvents:(id)arg1 diffSummary:(id)arg2;

- (bool)proposeFuture;
- (long long)recurringEventCount;
- (void)setProposeFuture:(bool)arg1;
- (void)setRecurringEventCount:(long long)arg1;
- (void)setShouldRequestSpan:(bool)arg1;
- (bool)shouldRequestSpan;

@end
