
@interface PXTranscriptBubbleViewController : UIViewController {
    UIView * _contentView;
    <PXTranscriptBubbleDelegate> * _delegate;
    bool  _isReadyForDisplay;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastRequestedSize;
    long long  _lastResizeRequestID;
    UIView * _targetContentView;
    bool  _transitionInProgress;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) <PXTranscriptBubbleDelegate> *delegate;
@property (nonatomic, retain) UIView *targetContentView;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentViewSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_requiresResizeForCurrentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_resizeTimeoutForRequestID:(long long)arg1;
- (void)_scheduleContentViewUpdate;
- (void)_switchToPendingTargetViewIfNecessary;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)contentView;
- (id)delegate;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTargetContentView:(id)arg1;
- (id)targetContentView;
- (void)transitionToContentView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x1; double x2; })workaroundSizeForSize:(struct CGSize { double x1; double x2; })arg1;

@end
