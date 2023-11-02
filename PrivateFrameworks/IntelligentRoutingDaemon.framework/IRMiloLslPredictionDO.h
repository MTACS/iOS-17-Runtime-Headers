
@interface IRMiloLslPredictionDO : NSObject <NSCopying, NSSecureCoding> {
    long long  _confidence;
    long long  _confidenceReasonBitmap;
    long long  _miLoServiceQuality;
    long long  _miLoServiceQualityReasonBitmap;
    NSSet * _nearbyDevices;
    NSString * _predictionId;
    NSDate * _predictionTime;
    NSSet * _scores;
}

@property (nonatomic, readonly) long long confidence;
@property (nonatomic, readonly) long long confidenceReasonBitmap;
@property (nonatomic, readonly) long long miLoServiceQuality;
@property (nonatomic, readonly) long long miLoServiceQualityReasonBitmap;
@property (nonatomic, readonly) NSSet *nearbyDevices;
@property (nonatomic, readonly) NSString *predictionId;
@property (nonatomic, readonly) NSDate *predictionTime;
@property (nonatomic, readonly) NSSet *scores;

+ (id)miloLslPredictionDOWithPredictionId:(id)arg1 miLoServiceQuality:(long long)arg2 miLoServiceQualityReasonBitmap:(long long)arg3 scores:(id)arg4 nearbyDevices:(id)arg5 predictionTime:(id)arg6 confidence:(long long)arg7 confidenceReasonBitmap:(long long)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canLabel;
- (bool)canUse;
- (long long)confidence;
- (long long)confidenceReasonBitmap;
- (id)copyWithReplacementConfidence:(long long)arg1;
- (id)copyWithReplacementConfidenceReasonBitmap:(long long)arg1;
- (id)copyWithReplacementMiLoServiceQuality:(long long)arg1;
- (id)copyWithReplacementMiLoServiceQualityReasonBitmap:(long long)arg1;
- (id)copyWithReplacementNearbyDevices:(id)arg1;
- (id)copyWithReplacementPredictionId:(id)arg1;
- (id)copyWithReplacementPredictionTime:(id)arg1;
- (id)copyWithReplacementScores:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictionId:(id)arg1 miLoServiceQuality:(long long)arg2 miLoServiceQualityReasonBitmap:(long long)arg3 scores:(id)arg4 nearbyDevices:(id)arg5 predictionTime:(id)arg6 confidence:(long long)arg7 confidenceReasonBitmap:(long long)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMiloLslPredictionDO:(id)arg1;
- (bool)isInMotion;
- (bool)isTemporarilyUnavailable;
- (long long)miLoServiceQuality;
- (long long)miLoServiceQualityReasonBitmap;
- (id)nearbyDevices;
- (id)predictionId;
- (id)predictionTime;
- (double)scoreForPredictionId:(id)arg1 andLabel:(id)arg2;
- (id)scores;

@end
