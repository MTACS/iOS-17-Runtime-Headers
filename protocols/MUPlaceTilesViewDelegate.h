
@protocol MUPlaceTilesViewDelegate <NSObject>

@required

- (void)placeTileCollectionView:(MUPlaceTilesView *)arg1 didTapOnAccessoryViewModel:(MUPunchoutViewModel *)arg2;
- (void)placeTileCollectionView:(MUPlaceTilesView *)arg1 didTapOnViewModel:(id <MUPlaceTileViewModel>)arg2;

@end
