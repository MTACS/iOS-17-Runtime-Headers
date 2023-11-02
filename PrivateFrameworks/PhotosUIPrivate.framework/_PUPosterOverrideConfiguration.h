
@interface _PUPosterOverrideConfiguration : NSObject <PUPosterOverrideConfiguration> {
    bool  _applySmartCrop;
    NSString * _assetIdentifier;
    NSURL * _assetURL;
    bool  _includeBackfillLayers;
    bool  _includeInactiveLayers;
}

@property (nonatomic, readonly) bool applySmartCrop;
@property (nonatomic, readonly, copy) NSString *assetIdentifier;
@property (nonatomic, readonly) NSURL *assetURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includeBackfillLayers;
@property (nonatomic, readonly) bool includeInactiveLayers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applySmartCrop;
- (id)assetIdentifier;
- (id)assetURL;
- (bool)includeBackfillLayers;
- (bool)includeInactiveLayers;
- (id)initWithSettings:(id)arg1 assetURL:(id)arg2 assetIdentifier:(id)arg3;

@end
