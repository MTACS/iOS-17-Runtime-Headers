
@interface STFamilyRootViewController : STListViewController {
    NSObject<STRootViewModelCoordinator> * _coordinator;
    bool  _presentedAsModal;
}

@property (nonatomic, readonly) NSObject<STRootViewModelCoordinator> *coordinator;
@property (nonatomic) bool presentedAsModal;

- (void).cxx_destruct;
- (id)coordinator;
- (id)init;
- (id)initWithModalPresentation:(bool)arg1;
- (bool)presentedAsModal;
- (void)setPresentedAsModal:(bool)arg1;

@end
