
@interface _UITextFieldVisualStyle : NSObject {
    <_UITextFieldVisualStyleSubject> * _styleSubject;
}

@property (nonatomic) <_UITextFieldVisualStyleSubject> *styleSubject;

+ (id)inferredVisualStyleWithStyleSubject:(id)arg1;

- (void).cxx_destruct;
- (id)defaultFocusedTextColor;
- (id)defaultTextColor;
- (id)defaultTextColorForKeyboardAppearance;
- (void)handleTextVibrancy;
- (id)initWithStyleSubject:(id)arg1;
- (id)parentViewForTextContentView;
- (id)placeholderColor;
- (void)setStyleSubject:(id)arg1;
- (id)styleSubject;
- (bool)textShouldUseVibrancy;

@end
