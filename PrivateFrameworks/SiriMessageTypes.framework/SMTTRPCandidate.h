
@interface SMTTRPCandidate : NSObject <NSCopying, NSSecureCoding> {
    NSString * _requestId;
    NSArray * _tcuList;
    NSString * _trpCandidateId;
}

@property (nonatomic, readonly, copy) NSString *requestId;
@property (nonatomic, readonly, copy) NSArray *tcuList;
@property (nonatomic, readonly, copy) NSString *trpCandidateId;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrpCandidateId:(id)arg1 requestId:(id)arg2 tcuList:(id)arg3;
- (id)initWithTrpCandidateId:(id)arg1 tcuList:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)requestId;
- (id)tcuList;
- (id)trpCandidateId;

@end
