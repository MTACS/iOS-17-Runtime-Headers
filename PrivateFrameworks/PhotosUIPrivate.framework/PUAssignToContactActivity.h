
@interface PUAssignToContactActivity : UIAssignToContactActivity <PXActivity, UINavigationControllerDelegate> {
    <PXActivityItemSourceController> * _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)_systemImageName;
- (id)activityViewController;
- (id)itemSourceController;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)setItemSourceController:(id)arg1;

@end
