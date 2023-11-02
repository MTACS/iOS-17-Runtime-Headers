
@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata {
    NSArray * _customUTIs;
    NSString * _type;
}

@property (nonatomic, readonly) NSArray *UTIs;
@property (nonatomic, readonly) NSArray *customUTIs;
@property (nonatomic, readonly) NSString *type;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UTIs;
- (id)__INCodableDescriptionCustomUTIsKey;
- (id)__INCodableDescriptionTypeKey;
- (id)__INIntentResponseCodableDescriptionCustomUTIsKey;
- (id)__INIntentResponseCodableDescriptionTypeKey;
- (id)__INTypeCodableDescriptionCustomUTIsKey;
- (id)__INTypeCodableDescriptionTypeKey;
- (id)customUTIs;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)type;
- (void)updateWithDictionary:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (Class)wf_objectClass;
- (Class)wf_parameterClass;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;

@end
