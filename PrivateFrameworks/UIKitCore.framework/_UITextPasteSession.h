
@interface _UITextPasteSession : NSObject <UITextDropPasteSession> {
    bool  _animating;
    UITextPasteController * _controller;
    UITextPasteCoordinator * _coordinator;
    <UITextPasteSessionDelegate> * _delegate;
    UITextRange * _hiddenRange;
    NSArray * _originalItems;
    NSAttributedString * _pasteResult;
    <_UITextPasteProgressSupport> * _progressSupport;
    UITextRange * _range;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic) UITextPasteController *controller;
@property (nonatomic, retain) UITextPasteCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextPasteSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextRange *hiddenRange;
@property (nonatomic, copy) NSArray *originalItems;
@property (nonatomic, retain) NSAttributedString *pasteResult;
@property (nonatomic, retain) <_UITextPasteProgressSupport> *progressSupport;
@property (nonatomic, retain) UITextRange *range;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animationCompleted;
- (void)animationStarted;
- (id)controller;
- (id)coordinator;
- (id)delegate;
- (id)hiddenRange;
- (bool)isAnimating;
- (id)originalItems;
- (id)pasteResult;
- (id)positionedPasteResult;
- (id)progressSupport;
- (id)range;
- (void)setController:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHiddenRange:(id)arg1;
- (void)setOriginalItems:(id)arg1;
- (void)setPasteResult:(id)arg1;
- (void)setProgressSupport:(id)arg1;
- (void)setRange:(id)arg1;

@end
