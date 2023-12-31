
@protocol TSDRepDirectLayerHostProvider <NSObject>

@required

- (<TSDRepDirectLayerHosting> *)directLayerHostForRep:(TSDRep *)arg1;
- (void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(NSArray *)arg1;
- (void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(NSArray *)arg1;
- (void)directLayerHostUpdateRepOverlayLayers:(NSArray *)arg1;

@end
