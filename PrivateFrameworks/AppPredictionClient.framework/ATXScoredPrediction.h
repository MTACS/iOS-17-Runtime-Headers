
@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding> {
    id  _predictedItem;
    float  _score;
}

@property (nonatomic, readonly) id predictedItem;
@property (nonatomic, readonly) float score;

+ (id)predictionsFrom:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 score:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictedItem:(id)arg1 score:(float)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScoredPredictionItem:(id)arg1;
- (id)predictedItem;
- (float)score;
- (void)setScore:(float)arg1;

@end
