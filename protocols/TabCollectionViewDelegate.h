
@protocol TabCollectionViewDelegate <NSObject>

@required

- (bool)tabCollectionView:(id <TabCollectionView>)arg1 canCloseItem:(id <TabCollectionItem>)arg2;
- (void)tabCollectionView:(id <TabCollectionView>)arg1 closeItem:(id <TabCollectionItem>)arg2;
- (void)tabCollectionView:(id <TabCollectionView>)arg1 didMoveItem:(id <TabCollectionItem>)arg2 overItem:(id <TabCollectionItem>)arg3;
- (void)tabCollectionView:(id <TabCollectionView>)arg1 didSelectItem:(id <TabCollectionItem>)arg2;
- (void)tabCollectionView:(id <TabCollectionView>)arg1 item:(id <TabCollectionItem>)arg2 didProduceNavigationIntent:(_SFNavigationIntent *)arg3;

@end
