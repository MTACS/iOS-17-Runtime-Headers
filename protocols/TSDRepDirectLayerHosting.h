
@protocol TSDRepDirectLayerHosting <NSObject>

@required

- (void)directLayerHostRemoveIfMatchingContainerLayer:(CALayer *)arg1 forRep:(TSDRep *)arg2;
- (void)directLayerHostUpdateWithContainerLayer:(CALayer *)arg1 forRep:(TSDRep *)arg2;
- (void)directLayerhostUpdateTopLevelTilingLayers:(NSMutableSet *)arg1 forRep:(TSDRep *)arg2;

@optional

- (void)directLayerHostUpdateOverlayLayers:(NSArray *)arg1 forRep:(TSDRep *)arg2;

@end
