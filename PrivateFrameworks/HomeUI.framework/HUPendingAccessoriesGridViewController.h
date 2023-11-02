
@interface HUPendingAccessoriesGridViewController : HUServiceGridViewController <HFItemManagerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)initWithUser:(id)arg1 home:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2 view:(id)arg3;
- (void)viewDidLoad;

@end
