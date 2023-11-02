
@interface TSgPTPLocalClockPort : TSgPTPPort {
    TSDgPTPLocalClockPort * _implDC;
    TSXgPTPLocalClockPort * _implXPC;
}

@property (nonatomic, readonly) bool hasLocalFrequencyStabilityLower;
@property (nonatomic, readonly) bool hasLocalFrequencyStabilityUpper;
@property (nonatomic, readonly) bool hasLocalFrequencyToleranceLower;
@property (nonatomic, readonly) bool hasLocalFrequencyToleranceUpper;
@property (nonatomic, readonly) int localFrequencyStabilityLower;
@property (nonatomic, readonly) int localFrequencyStabilityUpper;
@property (nonatomic, readonly) int localFrequencyToleranceLower;
@property (nonatomic, readonly) int localFrequencyToleranceUpper;
@property (nonatomic, readonly) unsigned char localOscillatorType;

+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyStabilityUpper;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingHasLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyStabilityUpper;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceLower;
+ (id)keyPathsForValuesAffectingLocalFrequencyToleranceUpper;
+ (id)keyPathsForValuesAffectingLocalOscillatorType;

- (void).cxx_destruct;
- (bool)hasLocalFrequencyStabilityLower;
- (bool)hasLocalFrequencyStabilityUpper;
- (bool)hasLocalFrequencyToleranceLower;
- (bool)hasLocalFrequencyToleranceUpper;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;
- (int)localFrequencyStabilityLower;
- (int)localFrequencyStabilityUpper;
- (int)localFrequencyToleranceLower;
- (int)localFrequencyToleranceUpper;
- (unsigned char)localOscillatorType;

@end
