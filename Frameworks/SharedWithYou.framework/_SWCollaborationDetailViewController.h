
@interface _SWCollaborationDetailViewController : UIViewController {
    NSItemProvider * _itemProvider;
    UIViewController * _typeErasedHostingController;
    NSObject * _typeErasedViewModel;
}

@property (nonatomic) <UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (nonatomic, retain) SWHighlight *collaborationHighlight;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, retain) UIViewController *typeErasedHostingController;
@property (nonatomic, retain) NSObject *typeErasedViewModel;
@property (nonatomic, retain) SWCollaborationDetailViewModel *viewModel;

- (void).cxx_destruct;
- (id)cloudSharingControllerDelegate;
- (id)collaborationHighlight;
- (id)initWithCoder:(id)arg1;
- (id)initWithHighlight:(id)arg1;
- (id)initWithHighlight:(id)arg1 listContent:(id)arg2;
- (id)initWithItemProvider:(id)arg1;
- (id)initWithItemProvider_impl:(id)arg1;
- (id)itemProvider;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setCloudSharingControllerDelegate:(id)arg1;
- (void)setCollaborationHighlight:(id)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setListContent:(id)arg1;
- (void)setListContentView:(id)arg1;
- (void)setManageButtonTitle:(id)arg1;
- (void)setShowManageButton:(bool)arg1;
- (void)setTypeErasedHostingController:(id)arg1;
- (void)setTypeErasedViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)typeErasedHostingController;
- (id)typeErasedViewModel;
- (id)viewModel;

@end
