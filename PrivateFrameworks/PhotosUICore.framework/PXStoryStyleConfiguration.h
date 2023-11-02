
@interface PXStoryStyleConfiguration : NSObject <PXStoryStyleDescriptor> {
    <PXStoryAutoEditDecisionList> * _autoEditDecisionList;
    long long  _customColorGradeKind;
    bool  _isCustomized;
    NSString * _originalColorGradeCategory;
    <PXStorySongResource> * _songResource;
}

@property (nonatomic, readonly) <PXStoryAutoEditDecisionList> *autoEditDecisionList;
@property (nonatomic, readonly) long long customColorGradeKind;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCustomized;
@property (nonatomic, readonly) NSString *originalColorGradeCategory;
@property (nonatomic, readonly) <PXStorySongResource> *songResource;

- (void).cxx_destruct;
- (id)autoEditDecisionList;
- (id)copyWithAutoEditDecisionList:(id)arg1;
- (id)copyWithCustomizedColorGradeKind:(long long)arg1;
- (id)copyWithCustomizedSongResource:(id)arg1;
- (long long)customColorGradeKind;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOriginalColorGradeCategory:(id)arg1 customColorGradeKind:(long long)arg2 songResource:(id)arg3 autoEditDecisionList:(id)arg4 isCustomized:(bool)arg5;
- (bool)isCustomized;
- (bool)isEqual:(id)arg1;
- (id)originalColorGradeCategory;
- (id)songResource;

@end
