
@interface AMDModelAssets : NSObject {
    AMDModelAssetsMetadata * _assetsMetadata;
    NSData * _contentToLogicalMap;
    NSData * _logicalToContentMap;
    bool  _minimalMapPresent;
    bool  _useBinaryInputMap;
    bool  _useBinaryOutputMap;
}

@property (nonatomic, retain) AMDModelAssetsMetadata *assetsMetadata;
@property (nonatomic, retain) NSData *contentToLogicalMap;
@property (nonatomic, retain) NSData *logicalToContentMap;
@property (nonatomic) bool minimalMapPresent;
@property (nonatomic) bool useBinaryInputMap;
@property (nonatomic) bool useBinaryOutputMap;

+ (id)loadMapFromDir:(id)arg1 andFile:(id)arg2 error:(id*)arg3;
+ (void)saveMap:(id)arg1 toDir:(id)arg2 inFile:(id)arg3 keyIsInt64:(bool)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)assetsMetadata;
- (id)contentToLogicalMap;
- (id)getContentToLogicalMap;
- (id)getLogicalToContentMap;
- (id)initFromDir:(id)arg1 andMetadata:(id)arg2 useBinaryInputMap:(bool)arg3 useBinaryOutputMap:(bool)arg4 withModelId:(id)arg5 isInference:(bool)arg6 error:(id*)arg7;
- (bool)isValid;
- (void)loadCToLMapFromDir:(id)arg1 error:(id*)arg2;
- (void)loadLToCMapFromDir:(id)arg1 error:(id*)arg2;
- (id)logicalToContentMap;
- (bool)minimalMapPresent;
- (void)saveCToLMap:(id)arg1 toDir:(id)arg2 error:(id*)arg3;
- (void)saveLToCMap:(id)arg1 toDir:(id)arg2 error:(id*)arg3;
- (void)setAssetsMetadata:(id)arg1;
- (void)setContentToLogicalMap:(id)arg1;
- (void)setLogicalToContentMap:(id)arg1;
- (void)setMinimalMapPresent:(bool)arg1;
- (void)setUseBinaryInputMap:(bool)arg1;
- (void)setUseBinaryOutputMap:(bool)arg1;
- (bool)useBinaryInputMap;
- (bool)useBinaryOutputMap;

@end
