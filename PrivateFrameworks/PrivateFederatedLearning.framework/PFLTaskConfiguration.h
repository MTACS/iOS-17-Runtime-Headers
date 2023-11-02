
@interface PFLTaskConfiguration : NSObject <NSSecureCoding> {
    NSString * _dataProviderIdentifier;
    NSString * _eligibilityCheckIdentifier;
    NSNumber * _eligiblityProbability;
    int  _expectedModelVersion;
    NSString * _metricsIdentifier;
    MLModelConfiguration * _modelConfiguration;
    NSString * _modelIdentifier;
    NSURL * _modelTemporaryURL;
    unsigned int  _privatizationNormBinCount;
    double  _privatizationNormMax;
    NSString * _taskId;
    NSArray * _trainableLayers;
    double  _validationSplit;
}

@property (nonatomic, retain) NSString *dataProviderIdentifier;
@property (nonatomic, readonly) NSString *eligibilityCheckIdentifier;
@property (nonatomic, readonly) NSNumber *eligiblityProbability;
@property (nonatomic) int expectedModelVersion;
@property (nonatomic, readonly) NSString *metricsIdentifier;
@property (nonatomic, readonly) MLModelConfiguration *modelConfiguration;
@property (nonatomic, retain) NSString *modelIdentifier;
@property (nonatomic, readonly) NSURL *modelTemporaryURL;
@property (nonatomic, readonly) unsigned int privatizationNormBinCount;
@property (nonatomic, readonly) double privatizationNormMax;
@property (nonatomic, retain) NSString *taskId;
@property (nonatomic, readonly) NSArray *trainableLayers;
@property (nonatomic, readonly) double validationSplit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataProviderIdentifier;
- (id)eligibilityCheckIdentifier;
- (id)eligiblityProbability;
- (void)encodeWithCoder:(id)arg1;
- (int)expectedModelVersion;
- (unsigned long long)hash;
- (id)initWithCKRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPFLTask:(id)arg1;
- (id)initWithRawValues:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metricsIdentifier;
- (id)modelConfiguration;
- (id)modelIdentifier;
- (id)modelTemporaryURL;
- (unsigned int)privatizationNormBinCount;
- (double)privatizationNormMax;
- (void)setDataProviderIdentifier:(id)arg1;
- (void)setExpectedModelVersion:(int)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)taskId;
- (id)trainableLayers;
- (double)validationSplit;

@end
