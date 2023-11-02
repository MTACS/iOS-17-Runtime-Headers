
@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying, WFIntentParameterDescription> {
    INCodableAttribute * _codableAttribute;
    NSString * _dataPropertyName;
    NSArray * _defaultValueSelectorStrings;
    NSString * _facadePropertyName;
    bool  _isExtended;
    bool  _isPrivate;
    NSString * _name;
    NSArray * _provideOptionsSelectorStrings;
    NSNumber * _rank;
    Class  _resolutionResultClass;
    NSArray * _resolveSelectorStrings;
    unsigned long long  _tag;
    long long  _valueStyle;
    long long  _valueType;
}

@property (nonatomic, readonly, copy) INCodableAttribute *codableAttribute;
@property (nonatomic, readonly, copy) NSString *dataPropertyName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSArray *defaultValueSelectorStrings;
@property (nonatomic, readonly) SEL deprecatedResolveSelector;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *facadePropertyName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEnum;
@property (nonatomic, readonly) bool isExtended;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *provideOptionsSelectorStrings;
@property (nonatomic, retain) NSNumber *rank;
@property (nonatomic, readonly) Class resolutionResultClass;
@property (nonatomic, readonly) SEL resolveSelector;
@property (nonatomic, readonly, copy) NSArray *resolveSelectorStrings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tag;
@property (nonatomic, readonly) long long valueStyle;
@property (nonatomic, readonly) long long valueType;
@property (nonatomic, readonly) Class wf_contentItemClass;
@property (nonatomic, readonly) Class wf_facadeClass;
@property (nonatomic, readonly) bool wf_multipleValues;
@property (nonatomic, readonly) Class wf_objectClass;
@property (nonatomic, readonly) Class wf_parameterClass;
@property (nonatomic, readonly) NSString *wf_slotName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (void).cxx_destruct;
- (id)codableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataPropertyName;
- (id)defaultValueSelectorStrings;
- (SEL)deprecatedResolveSelector;
- (id)facadePropertyName;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(bool)arg5 isPrivate:(bool)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 codableAttribute:(id)arg9 defaultValueSelectorStrings:(id)arg10 provideOptionsSelectorStrings:(id)arg11 resolutionResultClass:(Class)arg12 resolveSelectors:(SEL)arg13;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(bool)arg5 isPrivate:(bool)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 defaultValueSelectorStrings:(id)arg9 provideOptionsSelectorStrings:(id)arg10 resolutionResultClass:(Class)arg11 resolveSelectors:(SEL)arg12;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(bool)arg7 isPrivate:(bool)arg8 resolveSelectors:(SEL)arg9;
- (bool)isEnum;
- (bool)isEqual:(id)arg1;
- (bool)isExtended;
- (bool)isPrivate;
- (id)localizeValue:(id)arg1 forLanguage:(id)arg2;
- (id)localizeValue:(id)arg1 withLocalizer:(id)arg2;
- (id)name;
- (id)provideOptionsSelectorStrings;
- (id)rank;
- (Class)resolutionResultClass;
- (SEL)resolveSelector;
- (id)resolveSelectorStrings;
- (void)setRank:(id)arg1;
- (void)setValue:(id)arg1 forSlotComposer:(id)arg2;
- (unsigned long long)tag;
- (id)valueForSlotComposer:(id)arg1;
- (long long)valueStyle;
- (long long)valueType;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_contentItemClass;
- (id)wf_contentItemForValue:(id)arg1;
- (Class)wf_facadeClass;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)wf_multipleValues;
- (Class)wf_objectClass;
- (id)wf_outputContentItemForOutput:(id)arg1;
- (id)wf_outputDisplayNameWithLocalizer:(id)arg1;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (id)wf_processedParameterValueForValue:(id)arg1;
- (id)wf_slotName;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;

@end
