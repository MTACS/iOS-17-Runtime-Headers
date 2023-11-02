
@interface AVAssetDownloadContentConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _mediaSelections;
    NSArray * _variantQualifiers;
}

@property (nonatomic, copy) NSArray *mediaSelections;
@property (nonatomic, copy) NSArray *variantQualifiers;

+ (bool)supportsSecureCoding;

- (struct FigStreamingAssetDownloadContentConfig { }*)_createFigContentConfigForEnvironmentalCondition:(long long)arg1;
- (void)_serializeIntoDownloadConfig:(struct FigStreamingAssetDownloadConfig { }*)arg1 asset:(id)arg2;
- (void)_serializeIntoDownloadConfig:(struct FigStreamingAssetDownloadConfig { }*)arg1 environmentalCondition:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mediaSelections;
- (void)setMediaSelections:(id)arg1;
- (void)setVariantQualifiers:(id)arg1;
- (id)variantQualifiers;

@end
