
@interface AVCompositionInternal : NSObject {
    NSDictionary * URLAssetInitializationOptions;
    AVAssetInspector * assetInspector;
    AVDispatchOnce * assetInspectorInitializationOnce;
    AVAssetInspectorLoader * assetInspectorLoader;
    struct OpaqueFigAsset { } * figAsset;
    AVDispatchOnce * figAssetInitializationOnce;
    struct OpaqueFigFormatReader { } * formatReader;
    AVDispatchOnce * formatReaderInitializationOnce;
    struct OpaqueFigMutableComposition { } * mutableComposition;
    struct CGSize { 
        double width; 
        double height; 
    }  naturalSize;
    NSMutableArray * tracks;
    AVDispatchOnce * tracksInitializationOnce;
}

@end
