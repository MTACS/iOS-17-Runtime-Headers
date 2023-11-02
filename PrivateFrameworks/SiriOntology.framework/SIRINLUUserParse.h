
@interface SIRINLUUserParse : NSObject <NSSecureCoding> {
    double  _comparableProbability;
    NSUUID * _nsUUID;
    SIRINLUParser * _parser;
    NSString * _parserId;
    double  _probability;
    SIRINLURepetitionResult * _repetitionResult;
    NSArray * _userDialogActs;
}

@property (nonatomic) double comparableProbability;
@property (nonatomic, retain) NSUUID *nsUUID;
@property (nonatomic, retain) SIRINLUParser *parser;
@property (nonatomic, retain) NSString *parserId;
@property (nonatomic) double probability;
@property (nonatomic, retain) SIRINLURepetitionResult *repetitionResult;
@property (nonatomic, retain) NSArray *userDialogActs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)comparableProbability;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 nsUUID:(id)arg3 parserId:(id)arg4;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 nsUUID:(id)arg3 parserId:(id)arg4 repetitionResult:(id)arg5;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 nsUUID:(id)arg3 parserId:(id)arg4 repetitionResult:(id)arg5 comparableProbability:(double)arg6;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 nsUUID:(id)arg3 parserId:(id)arg4 repetitionResult:(id)arg5 parser:(id)arg6 comparableProbability:(double)arg7;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 parserId:(id)arg3;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 parserId:(id)arg3 repetitionResult:(id)arg4;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 parserId:(id)arg3 repetitionResult:(id)arg4 parser:(id)arg5;
- (id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 parserId:(id)arg3 repetitionResult:(id)arg4 parser:(id)arg5 comparableProbability:(double)arg6;
- (id)nsUUID;
- (id)parser;
- (id)parserId;
- (double)probability;
- (id)repetitionResult;
- (void)setComparableProbability:(double)arg1;
- (void)setNsUUID:(id)arg1;
- (void)setParser:(id)arg1;
- (void)setParserId:(id)arg1;
- (void)setProbability:(double)arg1;
- (void)setRepetitionResult:(id)arg1;
- (void)setUserDialogActs:(id)arg1;
- (id)userDialogActs;

@end
