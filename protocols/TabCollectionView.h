
@protocol TabCollectionView <NSObject>

@required

- (<TabCollectionViewDelegate> *)delegate;
- (long long)itemDragContentType;
- (NSArray *)items;
- (void)setDelegate:(id <TabCollectionViewDelegate>)arg1;
- (UIView *)view;

@optional

- (void)didUpdateItem:(id <TabCollectionItem>)arg1;

@end
