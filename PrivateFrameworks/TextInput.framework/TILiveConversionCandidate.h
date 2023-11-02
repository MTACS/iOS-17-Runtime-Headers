
@interface TILiveConversionCandidate : TIMecabraCandidate {
    NSString * _candidate;
    bool  _inlineCandidate;
    bool  _partialCandidate;
}

@property (getter=isInlineCandidate, nonatomic) bool inlineCandidate;
@property (getter=isPartialCandidate, nonatomic) bool partialCandidate;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 candidate:(id)arg3 mecabraCandidatePointerValue:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isInlineCandidate;
- (bool)isPartialCandidate;
- (id)label;
- (void)setInlineCandidate:(bool)arg1;
- (void)setPartialCandidate:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (id)initWithMecabraCandidate:(const void*)arg1 candidate:(id)arg2;

@end
