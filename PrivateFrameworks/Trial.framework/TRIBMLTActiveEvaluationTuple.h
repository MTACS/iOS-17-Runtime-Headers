
@interface TRIBMLTActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding> {
    TRIClientBackgroundMLTask * _bmlt;
    TRIFactorsState * _factorsState;
}

@property (nonatomic, readonly) TRIClientBackgroundMLTask *bmlt;
@property (nonatomic, readonly) TRIFactorsState *factorsState;

+ (bool)supportsSecureCoding;
+ (id)tupleWithBmlt:(id)arg1 factorsState:(id)arg2;

- (void).cxx_destruct;
- (id)bmlt;
- (id)copyWithReplacementBmlt:(id)arg1;
- (id)copyWithReplacementFactorsState:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)factorsState;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBmlt:(id)arg1 factorsState:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTuple:(id)arg1;

@end
