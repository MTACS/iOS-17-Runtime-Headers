
@interface WorkflowUI.MoveToFolderViewController : UIViewController <UICollectionViewDelegate> {
    void $__lazy_storage_$_collectionView;
    void $__lazy_storage_$_dataSource;
    void $__lazy_storage_$_layout;
    void delegate;
    void iconImage;
    void myFoldersSection;
    void newFolderSection;
    void rendererIdentifier;
    void shortcutsToMove;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabase:(id)arg1 shortcutsToMove:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
