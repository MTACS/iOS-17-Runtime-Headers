
@interface TRIMLRuntimeEvaluationHistoryRecord : NSObject <NSCopying, NSSecureCoding> {
    TRIMLRuntimeEvaluation * _evaluation;
    TRIEvaluationStatus * _status;
}

@property (nonatomic, readonly) TRIMLRuntimeEvaluation *evaluation;
@property (nonatomic, readonly) TRIEvaluationStatus *status;

+ (id)recordWithEvaluation:(id)arg1 status:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementEvaluation:(id)arg1;
- (id)copyWithReplacementStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvaluation:(id)arg1 status:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (id)status;

@end
