
@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle {
    NSString * _label;
    bool  _transliterationCandidate;
    long long  _transliterationType;
}

@property (nonatomic, copy) NSString *label;

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 label:(id)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 label:(id)arg3 transliterationType:(long long)arg4;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTransliterationCandidate;
- (id)label;
- (void)setLabel:(id)arg1;

@end
