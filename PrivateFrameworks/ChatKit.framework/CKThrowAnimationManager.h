
@interface CKThrowAnimationManager : NSObject <CKQuickReplyAnimationProvider, CKSendAnimationManager> {
    CKChatControllerDummyAnimator * _animator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _audioMessageSourceRect;
    UIImageView * _audioRecordingPillViewSnapshot;
    CKSendAnimationContext * _currentContext;
    CKTranscriptNotifyAnywayButtonCell * _fakeNotifyAnywayButtonCell;
    CKTranscriptTypingIndicatorCell * _fakeTypingIndicatorCell;
    CKTranscriptUnavailabilityIndicatorCell * _fakeUnavailabilityIndicatorCell;
    UIView * _quickReplySnapshot;
    <CKSendAnimationBalloonProvider> * _sendAnimationBalloonProvider;
    <CKSendAnimationManagerDelegate> * _sendAnimationManagerDelegate;
    UIView * _sendAnimationWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    <CKThrowAnimationManagerDelegate> * _throwManagerDelegate;
}

@property (nonatomic, retain) CKChatControllerDummyAnimator *animator;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } audioMessageSourceRect;
@property (nonatomic, retain) UIImageView *audioRecordingPillViewSnapshot;
@property (nonatomic, retain) CKSendAnimationContext *currentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKTranscriptNotifyAnywayButtonCell *fakeNotifyAnywayButtonCell;
@property (nonatomic, retain) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell;
@property (nonatomic, retain) CKTranscriptUnavailabilityIndicatorCell *fakeUnavailabilityIndicatorCell;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *quickReplySnapshot;
@property (nonatomic) <CKSendAnimationBalloonProvider> *sendAnimationBalloonProvider;
@property (nonatomic) <CKSendAnimationManagerDelegate> *sendAnimationManagerDelegate;
@property (nonatomic, retain) UIView *sendAnimationWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (readonly) Class superclass;
@property (nonatomic) <CKThrowAnimationManagerDelegate> *throwManagerDelegate;

- (void).cxx_destruct;
- (double)_changeInEntryViewHeight;
- (id)_collectionViewController;
- (id)_entryView;
- (void)_hideAddedChatItems;
- (long long)_indexOfLastChatItemThatWillNotStickToTheBottom:(id)arg1;
- (unsigned long long)_indexOfLastVisibleChatItemForChatItems:(id)arg1;
- (void)_prepareToAnimateMessages:(id)arg1;
- (void)_removeAllAnimations;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_sendMessageAndPinTranscript;
- (void)_setupFakeTypingAndUnavailabilityIndicatorsIfNecessary;
- (void)_setupThrowBalloonViews;
- (void)_setupThrowFrames;
- (void)_shiftFakeTypingIndicator;
- (void)_snapshotLiveBubbleIfNecessary;
- (bool)_transcriptWillShiftDueToThrowAnimation;
- (void)animateMessages:(id)arg1;
- (void)animateQuickReplyMessages:(id)arg1;
- (void)animationDidFinishWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)animator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })audioMessageSourceRect;
- (id)audioRecordingPillViewSnapshot;
- (id)currentContext;
- (id)fakeNotifyAnywayButtonCell;
- (id)fakeTypingIndicatorCell;
- (id)fakeUnavailabilityIndicatorCell;
- (id)init;
- (id)lastVisibleCellOfType:(Class)arg1 inCollectionView:(id)arg2;
- (void)playSoundForPopAnimation;
- (void)popAnimationDidBegin;
- (id)quickReplySnapshot;
- (double)scrollViewOffsetForBottomAligningChatItemAtIndex:(long long)arg1;
- (id)sendAnimationBalloonProvider;
- (id)sendAnimationManagerDelegate;
- (id)sendAnimationWindow;
- (void)setAnimator:(id)arg1;
- (void)setAudioMessageSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAudioRecordingPillViewSnapshot:(id)arg1;
- (void)setCurrentContext:(id)arg1;
- (void)setFakeNotifyAnywayButtonCell:(id)arg1;
- (void)setFakeTypingIndicatorCell:(id)arg1;
- (void)setFakeUnavailabilityIndicatorCell:(id)arg1;
- (void)setQuickReplySnapshot:(id)arg1;
- (void)setSendAnimationBalloonProvider:(id)arg1;
- (void)setSendAnimationManagerDelegate:(id)arg1;
- (void)setSendAnimationWindow:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThrowManagerDelegate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)throwManagerDelegate;

@end
