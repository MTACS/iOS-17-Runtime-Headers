
@interface SearchUIAppIconImage : SearchUIImage {
    NSString * _bundleIdentifier;
    unsigned long long  _variant;
}

@property (retain) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long variant;

+ (id)appIconForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
+ (id)appIconForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2 contentType:(id)arg3;
+ (id)appIconForImage:(id)arg1 variant:(unsigned long long)arg2;
+ (id)appIconForResult:(id)arg1 variant:(unsigned long long)arg2;
+ (unsigned long long)bestVariantForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)descriptorNameForVariant:(unsigned long long)arg1;
+ (int)iconFormatForVariant:(unsigned long long)arg1;
+ (id)imageForIcon:(id)arg1 descriptor:(id)arg2;
+ (struct CGSize { double x1; double x2; })sizeForVariant:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)appIconWillChange:(id)arg1;
- (id)bundleIdentifier;
- (int)defaultCornerRoundingStyle;
- (id)generateImageWithFormat:(int)arg1 scale:(double)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2 contentType:(id)arg3;
- (void)invalidateAppIcon;
- (bool)isEqual:(id)arg1;
- (id)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2;
- (bool)needsTinting;
- (void)setBundleIdentifier:(id)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (bool)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg1;
- (id)uniqueIdentifier;
- (unsigned long long)variant;

@end
