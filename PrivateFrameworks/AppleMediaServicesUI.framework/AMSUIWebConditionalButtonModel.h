
@interface AMSUIWebConditionalButtonModel : NSObject <AMSUIWebModelInterface> {
    AMSUIWebButtonModel * _button;
    bool  _hideOnModal;
    bool  _hideOnPush;
}

@property (nonatomic, retain) AMSUIWebButtonModel *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideOnModal;
@property (nonatomic) bool hideOnPush;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)button;
- (id)description;
- (bool)hideOnModal;
- (bool)hideOnPush;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (void)setButton:(id)arg1;
- (void)setHideOnModal:(bool)arg1;
- (void)setHideOnPush:(bool)arg1;

@end
