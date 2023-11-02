
@interface INCodableDateComponentsAttributeMetadata : INCodableAttributeMetadata {
    unsigned long long  _dateStyle;
    long long  _format;
    NSString * _formatString;
    NSString * _formatStringID;
    unsigned long long  _timeStyle;
    long long  _type;
}

@property (nonatomic, readonly) unsigned long long dateStyle;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly, copy) NSString *formatString;
@property (nonatomic, readonly, copy) NSString *formatStringID;
@property (nonatomic, readonly) unsigned long long timeStyle;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__INCodableDescriptionDateStyleKey;
- (id)__INCodableDescriptionFormatKey;
- (id)__INCodableDescriptionTemplateIDKey;
- (id)__INCodableDescriptionTemplateKey;
- (id)__INCodableDescriptionTimeStyleKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionDateStyleKey;
- (id)__INIntentResponseCodableDescriptionFormatKey;
- (id)__INIntentResponseCodableDescriptionTemplateIDKey;
- (id)__INIntentResponseCodableDescriptionTemplateKey;
- (id)__INIntentResponseCodableDescriptionTimeStyleKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionDateStyleKey;
- (id)__INTypeCodableDescriptionFormatKey;
- (id)__INTypeCodableDescriptionTemplateIDKey;
- (id)__INTypeCodableDescriptionTemplateKey;
- (id)__INTypeCodableDescriptionTimeStyleKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (unsigned long long)dateStyle;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)format;
- (id)formatString;
- (id)formatStringID;
- (id)initWithCoder:(id)arg1;
- (id)localizedFormatString;
- (id)localizedFormatStringWithLocalizer:(id)arg1;
- (unsigned long long)timeStyle;
- (long long)type;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;

@end
