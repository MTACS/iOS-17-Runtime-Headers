
@interface EKUIHorizontalScrollingVirtualConferenceCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {
    <VirtualConferenceRoomTypeSelectionDelegate> * _delegate;
    UICollectionView * _items;
    NSArray * _roomTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VirtualConferenceRoomTypeSelectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *roomTypes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_heightOfCells;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)roomTypes;
- (void)setDelegate:(id)arg1;
- (void)setRoomTypes:(id)arg1;

@end
