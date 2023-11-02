
@protocol PXStoryStyleDescriptor

@required

- (<PXStoryAutoEditDecisionList> *)autoEditDecisionList;
- (long long)customColorGradeKind;
- (unsigned long long)hash;
- (bool)isCustomized;
- (NSString *)originalColorGradeCategory;
- (<PXStorySongResource> *)songResource;

@end
