
@interface BMDSLBaseCodable : NSObject <NSSecureCoding> {
    bool  _evaluationBlocked;
    NSString * _name;
    unsigned int  _version;
}

@property (nonatomic, readonly) bool allowsEvaluation;
@property (getter=isEvaluationBlocked, nonatomic) bool evaluationBlocked;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int version;

+ (id)name;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)allowEvaluation;
- (bool)allowsEvaluation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 version:(unsigned int)arg2;
- (bool)isEvaluationBlocked;
- (id)name;
- (void)setEvaluationBlocked:(bool)arg1;
- (unsigned int)version;

@end
