
@interface CKTranscriptCollectionView : CKEditableCollectionView <UIGestureRecognizerDelegate> {
    bool  _ignoresContentOffsetChanges;
    bool  _ignoresReloadDataRequests;
    bool  _ignoresScrollToBottom;
    CKTranscriptBalloonCell * _swipeTargetBalloonCell;
    CABasicAnimation * _transcriptCustomScrollAnimation;
    NSCountedSet * _transcriptDynamicsDisabledReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dynamicsDisabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresContentOffsetChanges;
@property (nonatomic) bool ignoresReloadDataRequests;
@property (nonatomic) bool ignoresScrollToBottom;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKTranscriptBalloonCell *swipeTargetBalloonCell;
@property (nonatomic, retain) CABasicAnimation *transcriptCustomScrollAnimation;
@property (nonatomic, retain) NSCountedSet *transcriptDynamicsDisabledReasons;

- (void).cxx_destruct;
- (void)__ck_scrollToBottom:(bool)arg1;
- (id)_customScrollAnimation;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (void)_updateScrollingLockStateForRecognizer:(id)arg1;
- (void)beginDisablingTranscriptDynamicsForReason:(id)arg1;
- (bool)dynamicsDisabled;
- (void)endDisablingTranscriptDynamicsForReason:(id)arg1;
- (bool)ignoresContentOffsetChanges;
- (bool)ignoresReloadDataRequests;
- (bool)ignoresScrollToBottom;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x1; double x2; })arg1 inSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIgnoresContentOffsetChanges:(bool)arg1;
- (void)setIgnoresReloadDataRequests:(bool)arg1;
- (void)setIgnoresScrollToBottom:(bool)arg1;
- (void)setSwipeTargetBalloonCell:(id)arg1;
- (void)setTranscriptCustomScrollAnimation:(id)arg1;
- (void)setTranscriptDynamicsDisabledReasons:(id)arg1;
- (id)swipeTargetBalloonCell;
- (void)swipeToReplyGestureHandler:(id)arg1;
- (id)transcriptCustomScrollAnimation;
- (id)transcriptDynamicsDisabledReasons;

@end
