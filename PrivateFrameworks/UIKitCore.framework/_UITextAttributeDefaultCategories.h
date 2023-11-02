
@interface _UITextAttributeDefaultCategories : NSObject <_UITextAttributeDefaultCategories, _UITextAttributeDefaultFontSizes> {
    double  _buttonFontSize;
    _UITextAttributeDefaults * _generic;
    _UITextAttributeDefaults * _label;
    double  _labelFontSize;
    double  _smallSystemFontSize;
    double  _systemFontSize;
    _UITextAttributeDefaults * _textField;
    _UITextAttributeDefaults * _textView;
}

@property (nonatomic, readonly) double _buttonFontSize;
@property (nonatomic, readonly) <_UITextAttributeDefaults> *_generic;
@property (nonatomic, readonly) <_UITextAttributeDefaults> *_label;
@property (nonatomic, readonly) double _labelFontSize;
@property (nonatomic, readonly) double _smallSystemFontSize;
@property (nonatomic, readonly) double _systemFontSize;
@property (nonatomic, readonly) <_UITextAttributeDefaults> *_textField;
@property (nonatomic, readonly) <_UITextAttributeDefaults> *_textView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_buttonFontSize;
- (id)_generic;
- (id)_genericDefaults:(long long)arg1;
- (id)_label;
- (id)_labelDefaults:(long long)arg1;
- (double)_labelFontSize;
- (double)_smallSystemFontSize;
- (double)_systemFontSize;
- (id)_textField;
- (id)_textFieldDefaults:(long long)arg1;
- (id)_textView;
- (id)_textViewDefaults:(long long)arg1;
- (id)description;
- (id)initWithUserInterfaceIdiom:(long long)arg1;

@end
