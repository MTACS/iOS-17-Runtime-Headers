
@interface TSDgPTPLocalClockPort : TSDgPTPPort {
    bool  _hasLocalFrequencyStabilityLower;
    bool  _hasLocalFrequencyStabilityUpper;
    bool  _hasLocalFrequencyToleranceLower;
    bool  _hasLocalFrequencyToleranceUpper;
    int  _localFrequencyStabilityLower;
    int  _localFrequencyStabilityUpper;
    int  _localFrequencyToleranceLower;
    int  _localFrequencyToleranceUpper;
    unsigned char  _localOscillatorType;
}

@property (nonatomic) bool hasLocalFrequencyStabilityLower;
@property (nonatomic) bool hasLocalFrequencyStabilityUpper;
@property (nonatomic) bool hasLocalFrequencyToleranceLower;
@property (nonatomic) bool hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) unsigned char localOscillatorType;

+ (id)diagnosticInfoForService:(id)arg1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;

- (bool)_hasLocalFrequencyStabilityLower;
- (bool)_hasLocalFrequencyStabilityUpper;
- (bool)_hasLocalFrequencyToleranceLower;
- (bool)_hasLocalFrequencyToleranceUpper;
- (int)_localFrequencyStabilityLower;
- (int)_localFrequencyStabilityUpper;
- (int)_localFrequencyToleranceLower;
- (int)_localFrequencyToleranceUpper;
- (unsigned char)_localOscillatorType;
- (bool)hasLocalFrequencyStabilityLower;
- (bool)hasLocalFrequencyStabilityUpper;
- (bool)hasLocalFrequencyToleranceLower;
- (bool)hasLocalFrequencyToleranceUpper;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (int)localFrequencyStabilityLower;
- (int)localFrequencyStabilityUpper;
- (int)localFrequencyToleranceLower;
- (int)localFrequencyToleranceUpper;
- (unsigned char)localOscillatorType;
- (int)portType;
- (void)setHasLocalFrequencyStabilityLower:(bool)arg1;
- (void)setHasLocalFrequencyStabilityUpper:(bool)arg1;
- (void)setHasLocalFrequencyToleranceLower:(bool)arg1;
- (void)setHasLocalFrequencyToleranceUpper:(bool)arg1;
- (void)setLocalFrequencyStabilityLower:(int)arg1;
- (void)setLocalFrequencyStabilityUpper:(int)arg1;
- (void)setLocalFrequencyToleranceLower:(int)arg1;
- (void)setLocalFrequencyToleranceUpper:(int)arg1;
- (void)setLocalOscillatorType:(unsigned char)arg1;

@end
