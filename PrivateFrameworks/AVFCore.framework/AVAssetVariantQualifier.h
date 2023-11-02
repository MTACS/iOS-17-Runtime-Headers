
@interface AVAssetVariantQualifier : NSObject <NSCopying, NSSecureCoding> {
    long long  _environmentalConditions;
    NSPredicate * _predicate;
    AVAssetVariant * _variant;
}

@property (nonatomic) long long environmentalConditions;

+ (id)assetVariantQualifierWithPredicate:(id)arg1;
+ (id)assetVariantQualifierWithVariant:(id)arg1;
+ (id)predicateForBinauralAudio:(bool)arg1 mediaSelectionOption:(id)arg2;
+ (id)predicateForChannelCount:(long long)arg1 mediaSelectionOption:(id)arg2 operatorType:(unsigned long long)arg3;
+ (id)predicateForDownmixAudio:(bool)arg1 mediaSelectionOption:(id)arg2;
+ (id)predicateForImmersiveAudio:(bool)arg1 mediaSelectionOption:(id)arg2;
+ (id)predicateForPresentationHeight:(double)arg1 operatorType:(unsigned long long)arg2;
+ (id)predicateForPresentationWidth:(double)arg1 operatorType:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (id)_predicate;
- (bool)_validatePredicate:(id)arg1 error:(id*)arg2;
- (id)_variant;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (long long)environmentalConditions;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariant:(id)arg1 predicate:(id)arg2;
- (void)setEnvironmentalConditions:(long long)arg1;

@end
