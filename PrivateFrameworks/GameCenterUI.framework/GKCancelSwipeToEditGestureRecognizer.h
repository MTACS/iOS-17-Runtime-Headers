
@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer {
    GKCollectionViewCell * _currentEditingCell;
}

@property (nonatomic, retain) GKCollectionViewCell *currentEditingCell;

- (void).cxx_destruct;
- (id)currentEditingCell;
- (void)setCurrentEditingCell:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
