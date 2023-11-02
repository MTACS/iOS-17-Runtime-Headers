
@protocol PFStoryRecipeStyle

@required

- (long long)customColorGradeKind;
- (NSString *)diagnosticDescription;
- (NSString *)identifier;
- (bool)isCustomized;
- (bool)isEqualToStyle:(id <PFStoryRecipeStyle>)arg1;
- (NSString *)originalColorGradeCategory;
- (NSString *)songAssetIdentifier;

@end
