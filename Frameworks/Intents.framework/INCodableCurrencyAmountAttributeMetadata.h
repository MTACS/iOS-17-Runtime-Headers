
@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata {
    NSString * _currencyCode;
    NSArray * _currencyCodes;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, readonly) NSArray *currencyCodes;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionCurrencyCodeKey;
- (id)__INCodableDescriptionCurrencyCodesKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
- (id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
- (id)__INTypeCodableDescriptionCurrencyCodeKey;
- (id)__INTypeCodableDescriptionCurrencyCodesKey;
- (id)currencyCode;
- (id)currencyCodes;
- (id)defaultValueForIntentDefaultValueProvider;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;
- (void)wf_updateWithParameterState:(id)arg1;
- (void)wf_updateWithParameterValue:(id)arg1;

@end
