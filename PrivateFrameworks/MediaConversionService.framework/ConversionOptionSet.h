
@interface ConversionOptionSet : NSObject {
    NSMutableArray * _conversionOptionInputKeyValuePairs;
    NSMutableDictionary * _conversionOptions;
    NSString * _conversionType;
    NSString * _destinationPath;
    NSString * _destinationPathVideoComplement;
    NSString * _presetName;
    long long  _repeatCount;
    bool  _replaceExistingOutput;
    NSString * _sourcePath;
    NSString * _sourcePathVideoComplement;
    bool  _verbose;
}

@property (retain) NSMutableArray *conversionOptionInputKeyValuePairs;
@property (retain) NSMutableDictionary *conversionOptions;
@property (retain) NSString *conversionType;
@property (retain) NSString *destinationPath;
@property (retain) NSString *destinationPathVideoComplement;
@property (retain) NSString *presetName;
@property long long repeatCount;
@property bool replaceExistingOutput;
@property (retain) NSString *sourcePath;
@property (retain) NSString *sourcePathVideoComplement;
@property bool verbose;

+ (id)knownConversionTypes;
+ (struct CGSize { double x1; double x2; })sizeForImageAtPath:(id)arg1;

- (void).cxx_destruct;
- (id)arrayOfStringsForString:(id)arg1;
- (int)checkDestinationExists;
- (id)cmTimeRangeDictionaryForString:(id)arg1;
- (id)conversionOptionInputKeyValuePairs;
- (id)conversionOptionValueForString:(id)arg1 valueType:(unsigned long long)arg2;
- (id)conversionOptions;
- (id)conversionType;
- (id)destinationPath;
- (id)destinationPathVideoComplement;
- (id)init;
- (id)metadataPolicyForString:(id)arg1;
- (id)photosAdjustmentsDictionaryForAdjustmentsFileAtPath:(id)arg1;
- (id)photosAdjustmentsDictionaryForString:(id)arg1;
- (id)presetListForMapping:(id)arg1;
- (id)presetName;
- (id)presetNameToOptionsMappingForImageConversionOrVideoStillImageExtraction;
- (id)presetNameToOptionsMappingForVideoTranscoding;
- (bool)processConversionOptionKey:(id)arg1 valueString:(id)arg2;
- (long long)repeatCount;
- (bool)replaceExistingOutput;
- (double)scaleFactorForInputSize:(struct CGSize { double x1; double x2; })arg1 sharedStreamsSizeSpecificationString:(id)arg2;
- (void)setConversionOptionInputKeyValuePairs:(id)arg1;
- (void)setConversionOptions:(id)arg1;
- (void)setConversionType:(id)arg1;
- (void)setDestinationPath:(id)arg1;
- (void)setDestinationPathVideoComplement:(id)arg1;
- (void)setPresetName:(id)arg1;
- (void)setRepeatCount:(long long)arg1;
- (void)setReplaceExistingOutput:(bool)arg1;
- (void)setSourcePath:(id)arg1;
- (void)setSourcePathVideoComplement:(id)arg1;
- (void)setVerbose:(bool)arg1;
- (id)sourcePath;
- (id)sourcePathVideoComplement;
- (int)validateAndProcess;
- (bool)verbose;

@end
