
@interface RUIAlertView : RUIElement {
    UIAlertController * _alertController;
    long long  _buttonIndex;
    id /* block */  _completion;
    NSString * _message;
    RUIObjectModel<RUIAlertViewDelegate> * _objectModel;
    <RUIPresentationHandling> * _presentationContext;
    UIColor * _tintColor;
    NSString * _title;
}

@property (nonatomic, readonly) long long buttonIndex;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) RUIObjectModel<RUIAlertViewDelegate> *objectModel;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) NSString *title;

+ (void)_enableTestMode;

- (void).cxx_destruct;
- (void)_dismissAlertController;
- (void)addButtonWithTitle:(id)arg1 URL:(id)arg2 style:(long long)arg3 attributes:(id)arg4;
- (id)alertController;
- (long long)buttonIndex;
- (id /* block */)completion;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (id)message;
- (id)objectModel;
- (void)runAlertInController:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tintColor;
- (id)title;

@end
