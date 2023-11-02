
@interface CMProxPDP : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * fAmbient;
    NSNumber * fBaselineConfidence;
    NSNumber * fIntensity;
    NSNumber * fIntensityBaselineDelta;
    NSNumber * fIntensityCalDelta;
    NSNumber * fPocketFlag;
    NSNumber * fPocketProbability;
    NSNumber * fRxNtcC;
    NSNumber * fScanFlags;
    NSNumber * fTimestamp;
}

@property (nonatomic, readonly) NSNumber *ambient;
@property (nonatomic, readonly) NSNumber *baselineConfidence;
@property (nonatomic, readonly) NSNumber *intensity;
@property (nonatomic, readonly) NSNumber *intensityBaselineDelta;
@property (nonatomic, readonly) NSNumber *intensityCalDelta;
@property (nonatomic, readonly) NSNumber *pocketFlag;
@property (nonatomic, readonly) NSNumber *pocketProbability;
@property (nonatomic, readonly) NSNumber *rxNtcC;
@property (nonatomic, readonly) NSNumber *scanFlags;
@property (nonatomic, readonly) NSNumber *timestamp;

+ (bool)supportsSecureCoding;

- (id)ambient;
- (id)baselineConfidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 intensity:(float)arg2 intensityCalDelta:(float)arg3 intensityBaselineDelta:(float)arg4 ambient:(float)arg5 pocketProbability:(float)arg6 baselineConfidence:(float)arg7 rxNtcC:(float)arg8 scanFlags:(bool)arg9 pocketFlag:(bool)arg10;
- (id)intensity;
- (id)intensityBaselineDelta;
- (id)intensityCalDelta;
- (id)pocketFlag;
- (id)pocketProbability;
- (id)rxNtcC;
- (id)scanFlags;
- (id)timestamp;

@end
