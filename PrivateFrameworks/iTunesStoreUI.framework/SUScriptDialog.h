
@interface SUScriptDialog : SUScriptObject {
    NSString * _body;
    id  _buttons;
    NSNumber * _cancelButtonIndex;
    NSNumber * _destructiveButtonIndex;
    id  _textFields;
    NSString * _title;
}

@property (retain) NSString *body;
@property (retain) id buttons;
@property (retain) NSNumber *cancelButtonIndex;
@property (retain) NSNumber *destructiveButtonIndex;
@property (retain) id textFields;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_logSheetWarnings;
- (id)_nativeDialog;
- (id)attributeKeys;
- (id)body;
- (id)buttons;
- (id)cancelButtonIndex;
- (void)dealloc;
- (id)destructiveButtonIndex;
- (void)dismiss;
- (id)scriptAttributeKeys;
- (void)setBody:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setCancelButtonIndex:(id)arg1;
- (void)setDestructiveButtonIndex:(id)arg1;
- (void)setTextFields:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)show;
- (void)showFromDOMElement:(id)arg1;
- (void)showSheet;
- (void)showSheetInPopOver:(id)arg1;
- (id)textFields;
- (id)title;

@end
