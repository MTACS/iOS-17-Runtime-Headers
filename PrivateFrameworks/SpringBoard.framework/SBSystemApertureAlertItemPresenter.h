
@interface SBSystemApertureAlertItemPresenter : NSObject <SBAlertItemPresenter> {
    NSMapTable * _elementsToAssertions;
    SBSystemApertureController * _systemApertureController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMapTable *elementsToAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBSystemApertureController *systemApertureController;

- (void).cxx_destruct;
- (bool)canPresentMultipleAlertItemsSimultaneously;
- (void)dismissAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)elementsToAssertions;
- (id)initWithSystemApertureController:(id)arg1;
- (void)presentAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)presentsAlertItemsModally;
- (id)systemApertureController;

@end
