
@protocol PXPeopleStripCollectionViewControllerDelegate <NSObject>

@required

- (void)memberTappedAtIndexPath:(NSIndexPath *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 forPeopleStripController:(PXPeopleStripCollectionViewController *)arg3;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (struct CGSize { double x1; double x2; })sizeForItem;

@end
