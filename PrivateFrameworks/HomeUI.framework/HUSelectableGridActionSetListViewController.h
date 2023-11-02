
@interface HUSelectableGridActionSetListViewController : HUGridActionSetListViewController {
    <HUSelectableGridActionSetListViewControllerDelegate> * _delegate;
    HFMutableSetDiff * _mutableSelectedActionSets;
}

@property (nonatomic) <HUSelectableGridActionSetListViewControllerDelegate> *delegate;
@property (nonatomic, retain) HFMutableSetDiff *mutableSelectedActionSets;

- (void).cxx_destruct;
- (void)_selectedItemStateChanged:(id)arg1 isSelected:(bool)arg2 accessoryViewCell:(id)arg3;
- (void)_updateSelectionState:(bool)arg1 forCell:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)delegate;
- (id)init;
- (id)initWithRoom:(id)arg1 selectedActionSets:(id)arg2;
- (id)mutableSelectedActionSets;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2 view:(id)arg3;
- (void)selectedActionSetStateChanged:(id)arg1 isSelected:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMutableSelectedActionSets:(id)arg1;

@end
