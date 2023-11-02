
@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {
    <_SBAlertControllerDelegate> * _alertControllerDelegate;
    SBAlertItem * _alertItem;
    NSObject<UIAlertControllerVisualStyleProviding> * _styleProvider;
}

@property (nonatomic) <_SBAlertControllerDelegate> *alertControllerDelegate;
@property (nonatomic) SBAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_styleProvider;
- (id)alertControllerDelegate;
- (id)alertItem;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithStyleProvider:(id)arg1;
- (void)setAlertControllerDelegate:(id)arg1;
- (void)setAlertItem:(id)arg1;
- (void)setHiddenOnClonedDisplay:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)viewDidDisappear:(bool)arg1;

@end
