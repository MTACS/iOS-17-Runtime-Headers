
@interface USKScene : USKObject {
    NSURL * _fileURL;
    struct TfRefPtr<pxrInternal_v0_22__aapl__pxrReserved__::UsdStage> { 
        struct TfRefBase {} *_refBase; 
    }  _usdStage;
}

@property (nonatomic, readonly) USKNode *rootNode;

+ (id)newSceneWithData:(id)arg1 name:(id)arg2;
+ (id)newSceneWithData:(id)arg1 name:(id)arg2 error:(id*)arg3;
+ (id)newSceneWithURL:(id)arg1;
+ (id)newSceneWithURL:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSubLayerWithPath:(id)arg1;
- (void)addSubLayerWithPath:(id)arg1 offset:(id)arg2;
- (id)customMetadataWithKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (void)dumpUSDA;
- (bool)exportToURL:(id)arg1;
- (id)init;
- (id)initSceneFromURL:(id)arg1;
- (id)initSceneFromURL:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 name:(id)arg2;
- (id)initWithData:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)initWithUsdStage:(struct TfRefPtr<pxrInternal_v0_22__aapl__pxrReserved__::UsdStage> { struct TfRefBase {} *x1; })arg1 fileURL:(id)arg2;
- (id)loadedNodeIterator;
- (id)metadata;
- (id)metadataWithKey:(id)arg1;
- (id)newNodeAtPath:(id)arg1 type:(id)arg2;
- (id)newNodeAtPath:(id)arg1 type:(id)arg2 specifier:(id)arg3;
- (id)nodeAtPath:(id)arg1;
- (id)nodeIterator;
- (id)objectAtPath:(id)arg1;
- (id)propertyAtPath:(id)arg1;
- (id)rootNode;
- (void)save;
- (void)saveAndCreateARKitUSDZPackageWithURL:(id)arg1;
- (void)saveAndCreateUSDZPackageWithURL:(id)arg1;
- (bool)setCustomMetadata:(id)arg1 value:(id)arg2;
- (bool)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (bool)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (id)subLayerOffsets;
- (id)subLayerPaths;
- (struct TfRefPtr<pxrInternal_v0_22__aapl__pxrReserved__::UsdStage> { struct TfRefBase {} *x1; })usdStage;

@end
