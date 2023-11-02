
@interface VideosUI.LibraryFamilyMembersViewController : VUIBaseViewController <VUIFamilyMembersViewControllerDelegate> {
    void familyController;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void).cxx_destruct;
- (void)familyMemberViewController:(id)arg1 didSelectFamilyMember:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationItem;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;

@end
