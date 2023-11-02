
@interface DOCAddTagView : UIView <UIScribbleInteractionDelegate, UITextFieldDelegate> {
    UILabel * _addNewTagLabel;
    _TtC26DocumentManagerExecutables33DOCTextFieldRoundedBackgroundView * _backgroundDuringTextInput;
    CAShapeLayer * _backgroundShapeLayer;
    <DOCAddTagTextFieldDelegate> * _delegate;
    NSArray * _notificationObservances;
    DOCTagDotView * _tagDotView;
    DOCAddTagViewTextField * _tagNameTextField;
}

@property (nonatomic, readonly) UILabel *addNewTagLabel;
@property (nonatomic, readonly) CAShapeLayer *backgroundShapeLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCAddTagTextFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEditing;
@property (nonatomic, readonly) NSArray *notificationObservances;
@property (readonly) Class superclass;
@property (nonatomic, readonly) DOCTagDotView *tagDotView;
@property (nonatomic, readonly) DOCAddTagViewTextField *tagNameTextField;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (void)_updateBorderPath;
- (void)_updateShapeLayerAttributes;
- (id)addNewTagLabel;
- (id)backgroundShapeLayer;
- (void)cancel;
- (void)commit;
- (void)dealloc;
- (id)delegate;
- (void)handleTapGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (void)layoutSubviews;
- (id)notificationObservances;
- (bool)scribbleInteractionShouldDelayFocus:(id)arg1;
- (void)scribbleInteractionWillBeginWriting:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowingAddNewTagLabel:(bool)arg1;
- (void)setupHoverEffects;
- (id)tagDotView;
- (id)tagNameTextField;
- (id)text;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateBackground;
- (void)updateHoverEffects;

@end
