
@interface INCodableAttributeMetadata : NSObject <INCodableCoding, INWidgetPlistRepresentable, NSSecureCoding> {
    INCodableAttribute * _codableAttribute;
    NSString * _name;
    NSString * _placeholder;
    NSString * _placeholderID;
}

@property (nonatomic, readonly) INCodableDescription *_codableDescription;
@property (nonatomic, readonly, copy) INCodableLocalizationTable *_localizationTable;
@property (nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedPlaceholder;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *placeholderID;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionPlaceholderIDKey;
- (id)__INCodableDescriptionPlaceholderKey;
- (id)__INIntentResponseCodableDescriptionPlaceholderIDKey;
- (id)__INIntentResponseCodableDescriptionPlaceholderKey;
- (id)__INTypeCodableDescriptionPlaceholderIDKey;
- (id)__INTypeCodableDescriptionPlaceholderKey;
- (id)_codableDescription;
- (id)_localizationTable;
- (id)_localizedDialogTokensWithLocalizer:(id)arg1;
- (id)codableAttribute;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 codableAttribute:(id)arg2;
- (id)localizedPlaceholder;
- (id)localizedPlaceholderWithLocalizer:(id)arg1;
- (id)name;
- (id)placeholder;
- (id)placeholderID;
- (void)setCodableAttribute:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderID:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_contentItemForValue:(id)arg1;
- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;
- (void)wf_updateWithParameterState:(id)arg1;
- (void)wf_updateWithParameterValue:(id)arg1;

@end
