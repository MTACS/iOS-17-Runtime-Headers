
@interface PKCombinedSelectActionViewControllerListSectionController : PKDynamicListSectionController {
    NSArray * _actions;
    <PKCombinedSelectActionViewControllerListSectionControllerDelegate> * _delegate;
    UICollectionViewCellRegistration * cellRegistration;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (nonatomic) <PKCombinedSelectActionViewControllerListSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)cellRegistration;
- (id)defaultListLayout;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 actions:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setCellRegistration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
