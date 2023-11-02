
@interface HKCardioFitnessMedicationsUseObject : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _options;
}

@property (readonly) bool medicationsAreSet;
@property (readonly) bool takingBetaBlockers;
@property (readonly) bool takingCalciumChannelBlockers;

+ (bool)supportsSecureCoding;

- (id)_initWithCardioFitnessMedicationsUseOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)medicationsAreSet;
- (bool)takingBetaBlockers;
- (bool)takingCalciumChannelBlockers;

@end
