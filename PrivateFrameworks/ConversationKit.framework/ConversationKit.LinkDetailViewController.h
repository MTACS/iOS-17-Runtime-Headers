
@interface ConversationKit.LinkDetailViewController : UIViewController <UICollectionViewDelegate> {
    void $__lazy_storage_$_cellProvider;
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_supplementaryViewProvider;
    void avatarController;
    void cancellables;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cellBackgroundConfiguration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cellRegistration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  deleteCellRegistration;
    void detailControllerFactory;
    void linkController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  linkDetailHeaderSupplementaryViewRegistration;
    void linkShareCoordinator;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  shareCellRegistration;
    void viewModel;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didTapDeleteLinkButton;
- (void)didTapJoin;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
