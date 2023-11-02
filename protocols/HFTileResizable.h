
@protocol HFTileResizable <NSObject>

@required

- (NAFuture *)hf_setTileSize:(NSString *)arg1;
- (NSString *)hf_tileSize;

@end
