
@interface AMSFraudReportResponse : NSObject <NSSecureCoding> {
    NSString * _evaluatedElement;
    NSString * _finalizedElement;
    NSString * _keyID;
    NSString * _nameSpace;
    long long  _newScore;
    NSString * _proof;
    long long  _reportedScore;
}

@property (nonatomic, retain) NSString *evaluatedElement;
@property (nonatomic, retain) NSString *finalizedElement;
@property (nonatomic, retain) NSString *keyID;
@property (nonatomic, retain) NSString *nameSpace;
@property (nonatomic) long long newScore;
@property (nonatomic, retain) NSString *proof;
@property (nonatomic) long long reportedScore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluatedElement;
- (id)finalizedElement;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 keyID:(id)arg2;
- (id)initWithURLResult:(id)arg1 keyID:(id)arg2;
- (id)keyID;
- (id)nameSpace;
- (long long)newScore;
- (id)proof;
- (long long)reportedScore;
- (void)setEvaluatedElement:(id)arg1;
- (void)setFinalizedElement:(id)arg1;
- (void)setKeyID:(id)arg1;
- (void)setNameSpace:(id)arg1;
- (void)setNewScore:(long long)arg1;
- (void)setProof:(id)arg1;
- (void)setReportedScore:(long long)arg1;

@end
