
@interface SSDialog : NSObject {
    NSArray * _buttons;
    NSMutableDictionary * _dialogDictionary;
}

@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, retain) SSDialogButton *defaultButton;
@property (nonatomic, readonly) NSDictionary *dialogDictionary;
@property (nonatomic, readonly) NSString *dialogKind;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *title;

- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)buttons;
- (void)dealloc;
- (id)defaultButton;
- (id)dialogDictionary;
- (id)dialogKind;
- (id)init;
- (id)initWithDialogDictionary:(id)arg1;
- (id)message;
- (void)setButtons:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)valueForProperty:(id)arg1;

@end
