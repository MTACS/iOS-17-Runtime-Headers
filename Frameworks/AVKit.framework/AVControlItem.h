
@interface AVControlItem : NSObject {
    id /* block */  _action;
    AVButton * _button;
    <AVControlItemDelegate> * _delegate;
    bool  _enabled;
    NSString * _identifier;
    UIImage * _image;
    bool  _secondGenerationControl;
    UIColor * _tintColor;
    NSString * _title;
    UIFont * _titleFont;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) <AVControlItemDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (getter=isSecondGenerationControl, nonatomic) bool secondGenerationControl;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)_createButton;
- (id)_formattedTitleString;
- (void)_notifyDelegateOfChangesIfNeeded;
- (void)_updateButton;
- (void)_updateTintColor;
- (id /* block */)action;
- (id)delegate;
- (id)identifier;
- (id)image;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (bool)isEnabled;
- (bool)isSecondGenerationControl;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSecondGenerationControl:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (id)tintColor;
- (id)title;
- (id)titleFont;
- (long long)type;
- (id)view;

@end
