
@interface TIMecabraFacemarkCandidate : TIMecabraCandidate {
    NSString * _category;
}

@property (nonatomic, copy) NSString *category;

+ (id)candidateWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4;
+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFacemarkCandidate;
- (void)setCategory:(id)arg1;

@end
