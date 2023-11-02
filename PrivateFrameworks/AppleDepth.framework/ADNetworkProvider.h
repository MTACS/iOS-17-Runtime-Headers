
@interface ADNetworkProvider : NSObject {
    ADConfidenceLevelRanges * _confidenceLevelRanges;
    NSMutableDictionary * _inputBufferMap;
    NSDictionary * _layoutNamesDict;
    NSDictionary * _networkMetadata;
    NSMutableDictionary * _outputBufferMap;
    unsigned long long  _rawConfidenceUnits;
    NSMutableDictionary * _sizesForInput;
    NSMutableDictionary * _sizesForOutput;
    NSURL * _url;
}

@property (nonatomic, readonly, retain) ADConfidenceLevelRanges *confidenceLevelRanges;
@property (nonatomic, readonly) NSDictionary *layoutNamesDict;
@property unsigned long long rawConfidenceUnits;
@property (nonatomic, readonly) NSURL *url;

+ (id)getAlternativePathForNetwork:(id)arg1 andPriority:(long long)arg2;
+ (bool)getAndVerifySizesFromConfig:(id)arg1 inDictionary:(id)arg2 forKey:(id)arg3 sizes:(id)arg4 layout:(unsigned long long*)arg5;
+ (id)getConfigFolderForNetwork:(id)arg1 andPriority:(long long)arg2;
+ (id)getDefaultPathForNetwork:(id)arg1 andPriority:(long long)arg2 allowPrecompiledModel:(bool)arg3;
+ (id)getEspressoFileNameForNetwork:(id)arg1 andPriority:(long long)arg2;
+ (id)providerForNetwork:(id)arg1;
+ (id)providerForNetwork:(id)arg1 espressoEngine:(unsigned long long)arg2;
+ (id)providerForNetwork:(id)arg1 prioritization:(long long)arg2;
+ (id)providerForNetwork:(id)arg1 prioritization:(long long)arg2 requestedLayouts:(id)arg3;
+ (id)providerForNetwork:(id)arg1 prioritization:(long long)arg2 requestedLayouts:(id)arg3 espressoEngine:(unsigned long long)arg4;
+ (void)updateSizeForItem:(id)arg1 fromShape:(id)arg2 dtype:(id)arg3 forLayout:(unsigned long long)arg4 target:(id)arg5;

- (void).cxx_destruct;
- (id)bufferNameForInputType:(id)arg1;
- (id)bufferNameForOutputType:(id)arg1;
- (id)bufferNameForType:(id)arg1 isInput:(bool)arg2;
- (id)confidenceLevelRanges;
- (id)descriptorForBuffer:(id)arg1 isInput:(bool)arg2 pixelFormat:(unsigned int)arg3;
- (id)descriptorForBufferOfType:(id)arg1 isInput:(bool)arg2 pixelFormat:(unsigned int)arg3;
- (id)generateLayoutNamesDictForFunction:(id)arg1;
- (id)initWithNetwork:(id)arg1 prioritization:(long long)arg2 requestedLayouts:(id)arg3 allowPrecompiledModel:(bool)arg4;
- (id)layoutNamesDict;
- (id)layoutNamesDictForFunction:(id)arg1;
- (id)metadataForKey:(id)arg1;
- (bool)processConfig:(id)arg1 inDictionary:(id)arg2 forLayout:(unsigned long long)arg3;
- (unsigned long long)rawConfidenceUnits;
- (void)setRawConfidenceUnits:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeFor:(id)arg1 isInput:(bool)arg2 requestedLayout:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1 withLayout:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })sizeForOutput:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForOutput:(id)arg1 withLayout:(unsigned long long)arg2;
- (id)supportedSizesForInput:(id)arg1;
- (id)supportedSizesForOutput:(id)arg1;
- (id)url;

@end
