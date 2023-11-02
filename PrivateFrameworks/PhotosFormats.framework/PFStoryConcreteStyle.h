
@interface PFStoryConcreteStyle : NSObject <PFStoryRecipeStyle> {
    long long  _customColorGradeKind;
    NSString * _identifier;
    bool  _isCustomized;
    NSString * _originalColorGradeCategory;
    NSString * _songAssetIdentifier;
}

@property (nonatomic, readonly) long long customColorGradeKind;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isCustomized;
@property (nonatomic, readonly) NSString *originalColorGradeCategory;
@property (nonatomic, readonly) NSString *songAssetIdentifier;

- (void).cxx_destruct;
- (long long)customColorGradeKind;
- (id)diagnosticDescription;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 originalColorGradeCategory:(id)arg2 customColorGradeKind:(long long)arg3 songAssetIdentifier:(id)arg4 isCustomized:(bool)arg5;
- (bool)isCustomized;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStyle:(id)arg1;
- (id)originalColorGradeCategory;
- (id)songAssetIdentifier;

@end
