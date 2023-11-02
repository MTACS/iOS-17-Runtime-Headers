
@interface SHSheetGroupActivitySharingController : UIViewController {
    <SHSheetGroupActivitySharingControllerDelegate> * _delegate;
    UIViewController<GPGroupActivitySharingControllerHelpers> * _groupActivitySharingController;
    NSString * _shareSheetSessionID;
}

@property (nonatomic) <SHSheetGroupActivitySharingControllerDelegate> *delegate;
@property (nonatomic, retain) UIViewController<GPGroupActivitySharingControllerHelpers> *groupActivitySharingController;
@property (nonatomic, copy) NSString *shareSheetSessionID;

- (void).cxx_destruct;
- (id)delegate;
- (id)groupActivitySharingController;
- (id)initWithItemProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupActivitySharingController:(id)arg1;
- (void)setShareSheetSessionID:(id)arg1;
- (id)shareSheetSessionID;
- (void)viewDidLoad;

@end
