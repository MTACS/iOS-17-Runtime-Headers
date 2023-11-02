
@interface IRMiLoPredictionEventDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _label;
    NSString * _labelRealTime;
    NSString * _predictionId;
    NSString * _predictionIdRealTime;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *labelRealTime;
@property (nonatomic, readonly) NSString *predictionId;
@property (nonatomic, readonly) NSString *predictionIdRealTime;

+ (id)miLoPredictionEventDOWithLabel:(id)arg1 predictionId:(id)arg2 labelRealTime:(id)arg3 predictionIdRealTime:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementLabel:(id)arg1;
- (id)copyWithReplacementLabelRealTime:(id)arg1;
- (id)copyWithReplacementPredictionId:(id)arg1;
- (id)copyWithReplacementPredictionIdRealTime:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 predictionId:(id)arg2 labelRealTime:(id)arg3 predictionIdRealTime:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMiLoPredictionEventDO:(id)arg1;
- (id)label;
- (id)labelRealTime;
- (id)predictionId;
- (id)predictionIdRealTime;

@end
