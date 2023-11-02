
@interface _PXSharingUserSafetyControllerDelegate : NSObject <SCUIInterventionViewControllerDelegate> {
    id /* block */  _action;
}

@property (nonatomic, readonly) id /* block */ action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)action;
- (void)configureAction:(id /* block */)arg1;
- (void)didConfirmForInterventionViewController:(id)arg1;
- (void)didRejectForInterventionViewController:(id)arg1;

@end
