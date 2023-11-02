
@interface _SFWebsiteButton : UIButton {
    id /* block */  _activationHandler;
}

@property (nonatomic, copy) id /* block */ activationHandler;

- (void).cxx_destruct;
- (void)_activate:(id)arg1;
- (id /* block */)activationHandler;
- (id)init;
- (void)setActivationHandler:(id /* block */)arg1;

@end
