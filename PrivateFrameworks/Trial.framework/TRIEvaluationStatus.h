
@interface TRIEvaluationStatus : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    TRIFactorsState * _evalState;
    NSString * _evaluationId;
    unsigned char  _type;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) TRIFactorsState *evalState;
@property (nonatomic, readonly) NSString *evaluationId;
@property (nonatomic, readonly) unsigned char type;

+ (id)defaultProvider;
+ (id)freshProvider;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)evalState;
- (id)evaluationId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned char)arg1 evaluationId:(id)arg2 date:(id)arg3 evalState:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned char)type;

@end
