
@interface CKReasonTrackingUpdater : NSObject {
    <CKReasonTrackingUpdaterDelegate> * _delegate;
    bool  _hasPendingDeferredUpdate;
    NSString * _name;
    NSCountedSet * _reasonsForHoldingUpdates;
    NSCountedSet * _reasonsForNeedsUpdates;
}

@property (nonatomic) <CKReasonTrackingUpdaterDelegate> *delegate;
@property (nonatomic) bool hasPendingDeferredUpdate;
@property (nonatomic, readonly) bool isHoldingUpdates;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSCountedSet *reasonsForHoldingUpdates;
@property (nonatomic, retain) NSCountedSet *reasonsForNeedsUpdates;

- (void).cxx_destruct;
- (void)_handleReasonsForHoldingUpdatesChangeForReason:(id)arg1 updateTriggeredIfNotHeldShouldBeDeferred:(bool)arg2;
- (void)_scheduleDeferredUpdateFollowingHoldForReason:(id)arg1;
- (void)_triggerNeedsUpdateFollowingHoldForReason:(id)arg1;
- (void)beginHoldingUpdatesForReason:(id)arg1;
- (id)delegate;
- (id)description;
- (void)endAllHoldsOnUpdatesForReason:(id)arg1 updateTriggeredIfNotHeldShouldBeDeferred:(bool)arg2;
- (void)endHoldingUpdatesForReason:(id)arg1 updateTriggeredIfNotHeldShouldBeDeferred:(bool)arg2;
- (bool)hasPendingDeferredUpdate;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (bool)isHoldingUpdates;
- (bool)isHoldingUpdatesForReason:(id)arg1;
- (id)name;
- (bool)needsUpdate;
- (id)reasonsForHoldingUpdates;
- (id)reasonsForNeedsUpdates;
- (void)setDelegate:(id)arg1;
- (void)setHasPendingDeferredUpdate:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsDeferredUpdateWithReason:(id)arg1;
- (void)setReasonsForHoldingUpdates:(id)arg1;
- (void)setReasonsForNeedsUpdates:(id)arg1;
- (void)updateImmediatelyIfNeeded;
- (void)updateImmediatelyWithReason:(id)arg1;

@end
