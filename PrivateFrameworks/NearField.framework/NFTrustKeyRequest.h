
@interface NFTrustKeyRequest : NFTrustObject {
    NSNumber * _counterLimit;
    NSData * _discretionaryData;
    NSArray * _localValidations;
    NSData * _subjectIdentifier;
}

@property (nonatomic, retain) NSNumber *counterLimit;
@property (nonatomic, retain) NSData *discretionaryData;
@property (nonatomic, retain) NSArray *localValidations;
@property (nonatomic, retain) NSData *subjectIdentifier;

+ (id)keyRequestWithSubjectIdentifier:(id)arg1 discretionaryData:(id)arg2 localValidations:(id)arg3 counterLimit:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)counterLimit;
- (id)discretionaryData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localValidations;
- (void)setCounterLimit:(id)arg1;
- (void)setDiscretionaryData:(id)arg1;
- (void)setLocalValidations:(id)arg1;
- (void)setSubjectIdentifier:(id)arg1;
- (id)subjectIdentifier;

@end
