
@protocol TBFetchResponseTileItem <NSObject>

@required

- (NSError *)error;
- (NSArray *)networks;
- (unsigned long long)status;
- (<TBTile> *)tile;

@end
