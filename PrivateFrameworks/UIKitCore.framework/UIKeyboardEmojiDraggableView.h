
@interface UIKeyboardEmojiDraggableView : UIView <UIDragInteractionDelegate_Private> {
    NSAttributedString * _attributedText;
    _MSStickerDragPreviewContainerView * _container;
    <UIKeyboardEmojiDraggableViewDelegate> * _delegate;
    bool  _dragEnabled;
    UIDragInteraction * _dragInteraction;
    UILabel * _fixedLabel;
    UIFont * _font;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    UIView * _liftContainerView;
    double  _liftScale;
    bool  _lifted;
    UILabel * _previewLabel;
    bool  _shouldLiftFromLastTouchLocation;
    NSString * _text;
    UIImageView * _upscaledImageView;
}

@property (nonatomic, retain) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardEmojiDraggableViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dragEnabled;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)_dragInteraction:(id)arg1 sessionPropertiesForSession:(id)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (void)addSilhouetteFiltersToView:(id)arg1;
- (id)attributedText;
- (id)createLabel;
- (id)delegate;
- (bool)dragEnabled;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)font;
- (void)generateEmoji:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)newLiftContainerView;
- (void)reset;
- (void)setAttributedText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragEnabled:(bool)arg1;
- (void)setEmojiPopoverBackgroundHitTestingEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateDragInteraction;
- (void)updateLiftScale;
- (void)willCancelVariantsWithTouch:(id)arg1;

@end
