
@interface SBAlertItemPresentation : NSObject <BSDescriptionProviding> {
    SBAlertItem * _alertItem;
    <SBAlertItemPresenter> * _presenter;
}

@property (nonatomic, retain) SBAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBAlertItemPresenter> *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertItem;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAlertItem:(id)arg1 presenter:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)presenter;
- (void)setAlertItem:(id)arg1;
- (void)setPresenter:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
