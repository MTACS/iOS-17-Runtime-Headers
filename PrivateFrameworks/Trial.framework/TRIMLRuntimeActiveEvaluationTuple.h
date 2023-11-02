
@interface TRIMLRuntimeActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding> {
    TRIMLRuntimeEvaluation * _eval;
    TRIFactorsState * _factorsState;
}

@property (nonatomic, readonly) TRIMLRuntimeEvaluation *eval;
@property (nonatomic, readonly) TRIFactorsState *factorsState;

+ (bool)supportsSecureCoding;
+ (id)tupleWithEval:(id)arg1 factorsState:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementEval:(id)arg1;
- (id)copyWithReplacementFactorsState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eval;
- (id)factorsState;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEval:(id)arg1 factorsState:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTuple:(id)arg1;

@end
