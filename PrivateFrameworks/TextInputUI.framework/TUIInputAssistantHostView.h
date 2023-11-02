
@interface TUIInputAssistantHostView : UIView {
    NSArray * _inputAccessoryBackdropConstraints;
    TUIInputAccessoryBackdropView * _inputAccessoryBackdropView;
    UIView * _inputAccessoryView;
    NSArray * _inputAssistantBackdropConstraints;
    TUIInputAssistantBackdropView * _inputAssistantBackdropView;
    bool  _isCompact;
    TUISystemInputAssistantView * _systemInputAssistantView;
}

@property (nonatomic, retain) NSArray *inputAccessoryBackdropConstraints;
@property (nonatomic, readonly) TUIInputAccessoryBackdropView *inputAccessoryBackdropView;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, retain) NSArray *inputAssistantBackdropConstraints;
@property (nonatomic, readonly) TUIInputAssistantBackdropView *inputAssistantBackdropView;
@property (setter=setCompact:, nonatomic) bool isCompact;
@property (nonatomic, retain) TUISystemInputAssistantView *systemInputAssistantView;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformForContent;

- (void).cxx_destruct;
- (void)ensureInputAssistantConstraints;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)inputAccessoryBackdropConstraints;
- (id)inputAccessoryBackdropView;
- (id)inputAccessoryView;
- (id)inputAssistantBackdropConstraints;
- (id)inputAssistantBackdropView;
- (bool)isCompact;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCompact:(bool)arg1;
- (void)setInputAccessoryBackdropConstraints:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputAssistantBackdropConstraints:(id)arg1;
- (void)setSystemInputAssistantView:(id)arg1;
- (void)setTransformForContent:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)systemInputAssistantView;
- (int)textEffectsVisibilityLevel;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForContent;
- (void)updateInputAccessoryBackdrop;
- (void)updateInputAssistantBackdrop;

@end
