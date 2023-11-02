
@interface MLRBMLTSchedulingPolicy : NSObject <NSSecureCoding> {
    NSString * _attachmentsFactorName;
    NSDictionary * _dictionaryRepresentation;
    NSDictionary * _dodMLPredicate;
    bool  _dodMLRequireDESRecordStore;
    unsigned long long  _maxEvaluation;
    double  _maxRunTimeInSeconds;
    double  _pluginMinGapInSeconds;
    NSString * _recipeFactorName;
    NSString * _recipeID;
    unsigned long long  _taskCount;
    double  _taskMinGapInSeconds;
    unsigned long long  _taskType;
    unsigned long long  _upload;
}

@property (nonatomic, readonly, copy) NSString *attachmentsFactorName;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *dodMLPredicate;
@property (nonatomic, readonly) bool dodMLRequireDESRecordStore;
@property (nonatomic, readonly) unsigned long long maxEvaluation;
@property (nonatomic, readonly) double maxRunTimeInSeconds;
@property (nonatomic, readonly) double pluginMinGapInSeconds;
@property (nonatomic, readonly, copy) NSString *recipeFactorName;
@property (nonatomic, readonly, copy) NSString *recipeID;
@property (nonatomic, readonly) unsigned long long taskCount;
@property (nonatomic, readonly) double taskMinGapInSeconds;
@property (nonatomic, readonly) unsigned long long taskType;
@property (nonatomic, readonly) unsigned long long upload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentsFactorName;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dodMLPredicate;
- (bool)dodMLRequireDESRecordStore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTRIPBStruct:(id)arg1;
- (unsigned long long)maxEvaluation;
- (double)maxRunTimeInSeconds;
- (double)pluginMinGapInSeconds;
- (id)recipeFactorName;
- (id)recipeID;
- (unsigned long long)taskCount;
- (double)taskMinGapInSeconds;
- (unsigned long long)taskType;
- (unsigned long long)upload;

@end
