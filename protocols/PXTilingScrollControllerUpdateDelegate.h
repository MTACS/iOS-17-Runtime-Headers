
@protocol PXTilingScrollControllerUpdateDelegate <NSObject>

@required

- (void)tilingScrollControllerDidUpdate:(id <PXTilingScrollController>)arg1;

@optional

- (void)tilingScrollControllerDidScroll:(id <PXTilingScrollController>)arg1;

@end
