
@interface WAAQIViewStyler : NSObject

+ (id)shadowColor;
+ (id)textColorWithLightLabel:(bool)arg1;

- (id)stringWithLogoImageFromText:(id)arg1 attribution:(id)arg2 attr:(id)arg3;
- (id)styledAQICategoryText:(id)arg1 mode:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (id)styledAQILocalizedIndexText:(id)arg1 mode:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (id)styledAQIMetadataCitationText:(id)arg1 attribution:(id)arg2 shouldInsertGlyph:(bool)arg3;
- (id)styledAQIMetadataGradeText:(id)arg1;
- (id)styledAQIMetadataRecommendationText:(id)arg1;
- (id)styledAQIMetadataSourceText:(id)arg1;
- (id)styledAQIText:(id)arg1 mode:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (id)styledDashWithLabelColor:(bool)arg1;

@end
