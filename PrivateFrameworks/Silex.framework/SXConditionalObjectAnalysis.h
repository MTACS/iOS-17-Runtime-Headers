
@interface SXConditionalObjectAnalysis : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary * _componentLayoutsToConditionsMap;
    NSMutableDictionary * _componentStylesToConditionsMap;
    NSMutableDictionary * _componentTextStylesToConditionsMap;
    NSMutableDictionary * _componentsToConditionsMap;
    NSMutableDictionary * _conditionsToComponentLayoutsMap;
    NSMutableDictionary * _conditionsToComponentStylesMap;
    NSMutableDictionary * _conditionsToComponentTextStylesMap;
    NSMutableDictionary * _conditionsToComponentsMap;
    NSMutableDictionary * _conditionsToTextStylesMap;
    NSMutableSet * _documentStyleConditionTypes;
    NSMutableDictionary * _textStylesToConditionsMap;
}

@property (nonatomic, readonly, copy) NSSet *documentStyleConditionTypes;

- (void).cxx_destruct;
- (id)componentLayoutsUsingConditionType:(id)arg1;
- (id)componentLayoutsUsingConditionTypes:(id)arg1;
- (id)componentStylesUsingConditionType:(id)arg1;
- (id)componentStylesUsingConditionTypes:(id)arg1;
- (id)componentTextStylesUsingConditionType:(id)arg1;
- (id)componentTextStylesUsingConditionTypes:(id)arg1;
- (id)componentsUsingConditionType:(id)arg1;
- (id)componentsUsingConditionTypes:(id)arg1;
- (id)conditionTypesUsedByComponent:(id)arg1;
- (id)conditionTypesUsedByComponentLayout:(id)arg1;
- (id)conditionTypesUsedByComponentLayouts:(id)arg1;
- (id)conditionTypesUsedByComponentStyle:(id)arg1;
- (id)conditionTypesUsedByComponentStyles:(id)arg1;
- (id)conditionTypesUsedByComponentTextStyle:(id)arg1;
- (id)conditionTypesUsedByComponentTextStyles:(id)arg1;
- (id)conditionTypesUsedByComponents:(id)arg1;
- (id)conditionTypesUsedByTextStyle:(id)arg1;
- (id)conditionTypesUsedByTextStyles:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentStyleConditionTypes;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectsForKey:(id)arg1 map:(id)arg2;
- (id)objectsForKeys:(id)arg1 map:(id)arg2;
- (void)populateWithSource:(id)arg1;
- (id)textStylesUsingConditionType:(id)arg1;
- (id)textStylesUsingConditionTypes:(id)arg1;

@end
