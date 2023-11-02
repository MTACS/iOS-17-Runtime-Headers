
@interface ACHAchievementProgressUpdate : NSObject <NSSecureCoding> {
    HKQuantity * _goalQuantity;
    HKQuantity * _progressQuantity;
    NSString * _templateUniqueName;
}

@property (retain) HKQuantity *goalQuantity;
@property (retain) HKQuantity *progressQuantity;
@property (retain) NSString *templateUniqueName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)goalQuantity;
- (id)initWithCodable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateUniqueName:(id)arg1 progressQuantity:(id)arg2 goalQuantity:(id)arg3;
- (id)progressQuantity;
- (void)setGoalQuantity:(id)arg1;
- (void)setProgressQuantity:(id)arg1;
- (void)setTemplateUniqueName:(id)arg1;
- (id)templateUniqueName;

@end
