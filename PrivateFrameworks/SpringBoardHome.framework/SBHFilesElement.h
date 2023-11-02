
@interface SBHFilesElement : SBHCustomIconElement

+ (id)elementIdentifier;
+ (id)elementKind;

- (id)configurationStorageIdentifier;
- (id)containerBundleIdentifier;
- (id)displayName;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)iconSupportsConfiguration:(id)arg1;
- (bool)iconSupportsRasterization:(id)arg1;
- (unsigned long long)supportedGridSizeClassesForIcon:(id)arg1;

@end
