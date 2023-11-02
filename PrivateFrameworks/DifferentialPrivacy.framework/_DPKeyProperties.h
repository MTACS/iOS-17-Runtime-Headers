
@interface _DPKeyProperties : NSObject {
    NSNumber * _acceptableError;
    bool  _approvedForNonDNU;
    bool  _bitStringAlgorithm;
    _DPPrivacyBudget * _budget;
    unsigned long long  _dataAlgorithm;
    bool  _directUpload;
    unsigned long long  _fragmentCount;
    unsigned long long  _fragmentWidth;
    NSString * _huffmanTableClass;
    bool  _keyPatternsAllowed;
    NSString * _namespaceName;
    NSString * _noiseDistribution;
    NSDictionary * _parameterDictionary;
    _DPValueRange * _possibleRange;
    NSNumber * _privacyParameter;
    unsigned long long  _privatizationAlgorithm;
    NSString * _propertiesName;
    NSString * _serverAlgorithmString;
    unsigned long long  _submissionPriority;
    bool  _telemetryAllowed;
    unsigned long long  _transport;
    _DPValueRange * _trimmedScale;
}

@property (nonatomic, readonly) NSNumber *acceptableError;
@property (nonatomic, readonly) bool approvedForNonDNU;
@property (nonatomic, readonly) bool bitStringAlgorithm;
@property (nonatomic, readonly) _DPPrivacyBudget *budget;
@property (nonatomic, readonly) unsigned long long dataAlgorithm;
@property (nonatomic, readonly) bool directUpload;
@property (nonatomic, readonly) unsigned long long fragmentCount;
@property (nonatomic, readonly) unsigned long long fragmentWidth;
@property (nonatomic, readonly) NSString *huffmanTableClass;
@property (nonatomic, readonly) bool keyPatternsAllowed;
@property (nonatomic, readonly) NSString *namespaceName;
@property (nonatomic, readonly, copy) NSString *noiseDistribution;
@property (nonatomic, readonly) NSDictionary *parameterDictionary;
@property (nonatomic, readonly) _DPValueRange *possibleRange;
@property (nonatomic, readonly) NSNumber *privacyParameter;
@property (nonatomic, readonly) unsigned long long privatizationAlgorithm;
@property (nonatomic, readonly, copy) NSString *propertiesName;
@property (nonatomic, readonly, copy) NSString *serverAlgorithmString;
@property (nonatomic, readonly) unsigned long long submissionPriority;
@property (nonatomic, readonly) bool telemetryAllowed;
@property (nonatomic, readonly) unsigned long long transport;
@property (nonatomic, readonly) _DPValueRange *trimmedScale;

+ (void)initialize;
+ (id)keyPropertiesForName:(id)arg1;
+ (id)keyPropertiesWithName:(id)arg1 fromDictionary:(id)arg2;
+ (id)propertiesFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)acceptableError;
- (bool)approvedForNonDNU;
- (bool)bitStringAlgorithm;
- (id)budget;
- (unsigned long long)dataAlgorithm;
- (id)description;
- (bool)directUpload;
- (unsigned long long)fragmentCount;
- (unsigned long long)fragmentWidth;
- (id)huffmanTableClass;
- (id)init;
- (id)initWithPropertyName:(id)arg1 dictionary:(id)arg2;
- (bool)keyPatternsAllowed;
- (id)namespaceName;
- (id)noiseDistribution;
- (id)parameterDictionary;
- (id)possibleRange;
- (id)privacyParameter;
- (unsigned long long)privatizationAlgorithm;
- (id)privatizationAlgorithmString;
- (id)propertiesName;
- (id)serverAlgorithmString;
- (unsigned long long)submissionPriority;
- (bool)telemetryAllowed;
- (unsigned long long)transport;
- (id)trimmedScale;

@end
