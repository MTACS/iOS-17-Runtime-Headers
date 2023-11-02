
@interface SGQuickResponsesRepliesNested : SGQuickResponsesReplies {
    NSArray * _categoryModels;
    NSArray * _categorySemanticClasses;
    NSArray * _categoryStyleGroups;
    NSArray * _models;
    NSSet * _normalizedReplyTextsSet;
    NSArray * _replyTextParent;
    NSArray * _replyTexts;
    NSArray * _selectedPseudocounts;
    NSArray * _semanticClassParent;
    NSArray * _semanticClassReplyTextStrings;
    NSArray * _semanticClassReplyTexts;
    NSArray * _semanticClassSelectedPseudocounts;
    NSArray * _semanticClassStyleGroups;
    NSArray * _semanticClasses;
    NSArray * _styleGroupParent;
    NSArray * _styleGroupReplyTexts;
    NSArray * _styleGroups;
}

@property (nonatomic, readonly) NSArray *categoryModels;
@property (nonatomic, readonly) NSArray *categorySemanticClasses;
@property (nonatomic, readonly) NSArray *categoryStyleGroups;
@property (nonatomic, readonly) NSArray *models;
@property (nonatomic, readonly) NSSet *normalizedReplyTextsSet;
@property (nonatomic, readonly) NSArray *replyTextParent;
@property (nonatomic, readonly) NSArray *replyTexts;
@property (nonatomic, readonly) NSArray *selectedPseudocounts;
@property (nonatomic, readonly) NSArray *semanticClassParent;
@property (nonatomic, readonly) NSArray *semanticClassReplyTextStrings;
@property (nonatomic, readonly) NSArray *semanticClassReplyTexts;
@property (nonatomic, readonly) NSArray *semanticClassSelectedPseudocounts;
@property (nonatomic, readonly) NSArray *semanticClassStyleGroups;
@property (nonatomic, readonly) NSArray *semanticClasses;
@property (nonatomic, readonly) NSArray *styleGroupParent;
@property (nonatomic, readonly) NSArray *styleGroupReplyTexts;
@property (nonatomic, readonly) NSArray *styleGroups;

+ (id)categoryModelsFromModels:(id)arg1;
+ (id)flattenedArraysFromNestedArray:(id)arg1;
+ (id)indexedArraysFromNestedArray:(id)arg1;
+ (bool)isZeroBasedAndContiguous:(id)arg1;
+ (id)modelSemanticClassesFromModels:(id)arg1;
+ (id)nestedArrayFromFlatArray:(id)arg1 nestedIndexes:(id)arg2;
+ (id)nestedArrayFromModels:(id)arg1;
+ (id)parentArraysFromNestedArray:(id)arg1 models:(id)arg2;
+ (id)replyModelsForArray:(id)arg1;
+ (id)selectedPseudocountsFromModels:(id)arg1;
+ (id)subclassesFromClasses:(id)arg1 subclassArray:(id)arg2;

- (void).cxx_destruct;
- (id)categoryModels;
- (id)categorySemanticClasses;
- (id)categoryStyleGroups;
- (id)initWithArray:(id)arg1;
- (unsigned long long)maxDistinctReplies;
- (unsigned long long)modelCount;
- (id)models;
- (id)normalizedReplyTextsSet;
- (unsigned long long)replyClassCount;
- (unsigned long long)replyCountForIndex:(unsigned long long)arg1;
- (unsigned long long)replyTextCount;
- (id)replyTextForIndex:(unsigned long long)arg1 position:(unsigned long long)arg2;
- (id)replyTextParent;
- (id)replyTexts;
- (id)replyTextsForIndex:(unsigned long long)arg1;
- (id)selectedPseudocounts;
- (id)semanticClassParent;
- (id)semanticClassReplyTextStrings;
- (id)semanticClassReplyTexts;
- (id)semanticClassSelectedPseudocounts;
- (id)semanticClassStyleGroups;
- (id)semanticClasses;
- (id)styleGroupParent;
- (id)styleGroupReplyTexts;
- (id)styleGroups;

@end
