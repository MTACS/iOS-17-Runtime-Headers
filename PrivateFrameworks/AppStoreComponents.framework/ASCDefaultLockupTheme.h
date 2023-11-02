
@interface ASCDefaultLockupTheme : NSObject <ASCLockupTheme, NSCopying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)headingLabelColorForView:(id)arg1;
+ (id)headingLabelFontForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (long long)numberOfLinesInSubtitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (long long)numberOfLinesInTitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)offerStatusLabelFontForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (struct CGSize { double x1; double x2; })preferredIconSizeForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (long long)preferredLabelAlignmentForSize:(id)arg1;
+ (id)sharedTheme;
+ (id)subtitleLabelFontForView:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)titleLabelFontForView:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (void)updateOfferStatusLabelColorForView:(id)arg1;

- (void)applyToLockupContentView:(id)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
