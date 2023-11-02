
@interface PXCMMSendBackSuggestion : NSObject {
    PHAssetCollection * _assetCollection;
    NSSet * _participants;
    NSArray * _recipients;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) NSSet *participants;
@property (nonatomic, readonly) NSArray *recipients;

+ (id)new;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 participants:(id)arg2;
- (id)participants;
- (id)recipients;

@end
