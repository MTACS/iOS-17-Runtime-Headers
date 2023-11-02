
@interface WFParameter : NSObject {
    bool  _allowsMultipleValues;
    NSDictionary * _arraySizeRangesByWidgetFamily;
    NSDictionary * _arraySizesBySizeClass;
    id  _defaultSerializedRepresentation;
    NSSet * _defaultSupportedVariableTypes;
    NSDictionary * _definition;
    NSSet * _disallowedVariableTypes;
    bool  _doNotLocalizePlaceholder;
    bool  _doNotLocalizeValues;
    NSHashTable * _eventObservers;
    bool  _fixedSizeArray;
    bool  _hidden;
    NSString * _importQuestionBehavior;
    bool  _insideWorkflow;
    NSString * _intentSlotName;
    bool  _isEditingForConfiguration;
    NSString * _key;
    NSString * _keyForSerialization;
    NSString * _languageCode;
    NSString * _legacyKey;
    NSString * _localizedDescription;
    NSString * _localizedLabel;
    NSString * _localizedPlaceholder;
    NSString * _localizedPrompt;
    bool  _rangedSizeArray;
    WFResourceManager * _resourceManager;
    bool  _shouldAlignLabels;
    NSSet * _supportedVariableTypes;
}

@property (nonatomic, readonly) bool allowsMultipleValues;
@property (nonatomic, readonly, copy) NSDictionary *arraySizeRangesByWidgetFamily;
@property (nonatomic, readonly, copy) NSDictionary *arraySizesBySizeClass;
@property (nonatomic, readonly, copy) id defaultSerializedRepresentation;
@property (nonatomic, readonly) NSSet *defaultSupportedVariableTypes;
@property (nonatomic, readonly, copy) NSDictionary *definition;
@property (nonatomic, readonly) NSSet *disallowedVariableTypes;
@property (nonatomic, readonly) bool displaysMultipleValueEditor;
@property (nonatomic, readonly) bool doNotLocalizePlaceholder;
@property (nonatomic, readonly) bool doNotLocalizeValues;
@property (nonatomic, readonly) NSHashTable *eventObservers;
@property (nonatomic, readonly) bool fixedSizeArray;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) NSString *importQuestionBehavior;
@property (getter=isInsideWorkflow, nonatomic, readonly) bool insideWorkflow;
@property (nonatomic, readonly) NSString *intentSlotName;
@property (nonatomic) bool isEditingForConfiguration;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *keyForSerialization;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly, copy) NSString *legacyKey;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, readonly, copy) NSString *localizedLabel;
@property (nonatomic, copy) NSString *localizedPlaceholder;
@property (nonatomic, copy) NSString *localizedPrompt;
@property (getter=isRangedSizeArray, nonatomic, readonly) bool rangedSizeArray;
@property (nonatomic, readonly) WFResourceManager *resourceManager;
@property (nonatomic, readonly) bool shouldAlignLabels;
@property (nonatomic, readonly) bool stripsTTSHints;
@property (nonatomic, readonly) NSSet *supportedVariableTypes;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)allInsertableVariableTypes;
+ (id)parameterWithDefinition:(id)arg1;
+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (void)addEventObserver:(id)arg1;
- (bool)allowsMultipleValues;
- (long long)arraySizeForWidgetSizeClass:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })arraySizeRangeForWidgetFamily:(id)arg1;
- (id)arraySizeRangesByWidgetFamily;
- (id)arraySizesBySizeClass;
- (void)attributesDidChange;
- (id)defaultSerializedRepresentation;
- (void)defaultSerializedRepresentationDidChange;
- (id)defaultSupportedVariableTypes;
- (id)definition;
- (id)disallowedVariableTypes;
- (bool)displaysMultipleValueEditor;
- (bool)doNotLocalizePlaceholder;
- (bool)doNotLocalizeValues;
- (id)eventObservers;
- (bool)fixedSizeArray;
- (id)importQuestionBehavior;
- (id)initWithDefinition:(id)arg1;
- (id)intentSlotName;
- (bool)isEditingForConfiguration;
- (bool)isHidden;
- (bool)isInsideWorkflow;
- (bool)isRangedSizeArray;
- (id)key;
- (id)keyForSerialization;
- (id)languageCode;
- (id)legacyKey;
- (id)localizedDescription;
- (id)localizedLabel;
- (id)localizedPlaceholder;
- (id)localizedPrompt;
- (Class)multipleStateClass;
- (bool)parameterStateIsValid:(id)arg1;
- (void)removeEventObserver:(id)arg1;
- (id)resourceManager;
- (void)setActionResources:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsEditingForConfiguration:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedPlaceholder:(id)arg1;
- (void)setLocalizedPrompt:(id)arg1;
- (bool)shouldAlignLabels;
- (Class)singleStateClass;
- (Class)stateClass;
- (void)stateValidityCriteriaDidChange;
- (bool)stripsTTSHints;
- (id)supportedVariableTypes;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

// Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor

+ (Class)uikitEditingControllerClass;

- (id)clearButtonMenuItemWithVariable:(id)arg1 parameterState:(id)arg2 setVariableHandler:(id /* block */)arg3;
- (bool)shouldShowVariable:(id)arg1 allowedVariableTypes:(id)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4;
- (id)variableMenuElementsWithVariable:(id)arg1 parameterState:(id)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4 setVariableHandler:(id /* block */)arg5;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (long long)arrayMaxCountForWidgetFamily:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })arraySizeRangeForCHSWidgetFamily:(long long)arg1;

@end
