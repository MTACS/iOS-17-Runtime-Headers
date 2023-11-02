
@interface ICNoteMergeabilityController : NSObject <ICNoteMergeabilityDelegate> {
    bool  _attemptedToMergeWhenEditingMarkedText;
    long long  _blockingMergeStack;
    bool  _hasBlockedMergeRequest;
    ICNote * _note;
    bool  _shouldBypassDidUnmarkTextCallback;
    bool  _shouldUseLongDelayWhenSchedulingUnmarkTextTimer;
    NSTimer * _unmarkTextTimer;
}

@property (nonatomic) bool attemptedToMergeWhenEditingMarkedText;
@property long long blockingMergeStack;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBlockedMergeRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mergeIsBlocked;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic) bool shouldBypassDidUnmarkTextCallback;
@property (nonatomic) bool shouldUseLongDelayWhenSchedulingUnmarkTextTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *unmarkTextTimer;

- (void).cxx_destruct;
- (void)addNotificationCenterObservers;
- (bool)attemptedToMergeWhenEditingMarkedText;
- (long long)blockingMergeStack;
- (void)dealloc;
- (bool)hasBlockedMergeRequest;
- (id)initWithNote:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedTextRange;
- (bool)mergeIsBlocked;
- (id)note;
- (void)performBlockToMergeNoteData:(id /* block */)arg1;
- (void)performMerge;
- (void)performPreviouslyBlockedMergeIfNecessary;
- (void)removeNotificationCenterObservers;
- (void)requestMerge;
- (void)requestMergeNotePrimitiveData;
- (void)resetBlockingMergeStack;
- (void)resetUnmarkTextTimerIfNeeded;
- (void)setAttemptedToMergeWhenEditingMarkedText:(bool)arg1;
- (void)setBlockingMergeStack:(long long)arg1;
- (void)setHasBlockedMergeRequest:(bool)arg1;
- (void)setShouldBypassDidUnmarkTextCallback:(bool)arg1;
- (void)setShouldUseLongDelayWhenSchedulingUnmarkTextTimer:(bool)arg1;
- (void)setUnmarkTextTimer:(id)arg1;
- (bool)shouldBypassDidUnmarkTextCallback;
- (bool)shouldUseLongDelayWhenSchedulingUnmarkTextTimer;
- (void)startBlockingMerge;
- (void)startUnmarkTextTimerIfNeeded;
- (void)stopBlockingMerge;
- (void)stopUnmarkTextTimerIfNeeded;
- (id)textStorage;
- (void)textStorageDidEndEditingNotification:(id)arg1;
- (void)textViewDidEndSelectionChange:(id)arg1;
- (void)textViewDidMarkText:(id)arg1;
- (void)textViewDidUnmarkText:(id)arg1;
- (void)textViewWillStartSelectionChange:(id)arg1;
- (void)unmarkTextIfNecessary;
- (id)unmarkTextTimer;
- (double)unmarkTextTimerTimeout;
- (void)userExpandedOrClosedKeyboardCandidateCollectionView:(id)arg1;

@end
