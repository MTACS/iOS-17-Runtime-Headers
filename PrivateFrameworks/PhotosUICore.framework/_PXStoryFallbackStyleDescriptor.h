
@interface _PXStoryFallbackStyleDescriptor : NSObject <PXStoryStyleDescriptor>

@property (nonatomic, readonly) <PXStoryAutoEditDecisionList> *autoEditDecisionList;
@property (nonatomic, readonly) long long customColorGradeKind;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCustomized;
@property (nonatomic, readonly) NSString *originalColorGradeCategory;
@property (nonatomic, readonly) <PXStorySongResource> *songResource;

+ (id)defaultFallbackStyleDescriptor;

- (id)autoEditDecisionList;
- (long long)customColorGradeKind;
- (bool)isCustomized;
- (id)originalColorGradeCategory;
- (id)songResource;

@end
