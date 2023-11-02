
@interface INIntentResponse : NSObject <CMSCoding, INCacheableContainer, INEnumerable, INGenericIntentResponse, INImageProxyInjecting, INIntentResponseExport, INIntentSlotComposing, INKeyImageProducing, INRuntimeObject, NSCopying, NSSecureCoding> {
    long long  __stage;
    bool  __userConfirmationRequired;
    _INPBIntentResponse * _backingStore;
    INCodableDescription * _codableDescription;
    long long  _code;
    PBCodable * _responseMessagePBRepresentation;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) NSDictionary *_JSONDictionaryRepresentation;
@property (nonatomic, readonly) NSString *_className;
@property (nonatomic, readonly) INCodableDescription *_codableDescription;
@property (setter=_setCode:, nonatomic) long long _code;
@property (nonatomic, readonly) INIntentResponseDescription *_instanceDescription;
@property (nonatomic, readonly) INIntentResponseCodableCode *_intentResponseCodableCode;
@property (nonatomic, readonly) long long _intentResponseCode;
@property (readonly) long long _intents_toggleState;
@property (readonly) INImage *_keyImage;
@property (setter=_setPayloadResponseTypeName:, nonatomic, retain) NSString *_payloadResponseTypeName;
@property (setter=_setRequiresAuthentication:, nonatomic) bool _requiresAuthentication;
@property (setter=_setRequiresProtectedData:, nonatomic) bool _requiresProtectedData;
@property (setter=_setResponseMessagePBRepresentation:, nonatomic, retain) PBCodable *_responseMessagePBRepresentation;
@property (nonatomic, readonly) bool _shouldForwardIntentToApp;
@property (setter=_setStage:, nonatomic) long long _stage;
@property (getter=_isSuccess, nonatomic, readonly) bool _success;
@property (nonatomic, readonly) long long _type;
@property (nonatomic, readonly) bool _userConfirmationRequired;
@property (nonatomic, readonly, copy) _INPBIntentResponse *backingStore;
@property (nonatomic) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *propertiesByName;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSUserActivity *userActivity;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromIntentResponseCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (void)initialize;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_JSONDictionaryRepresentation;
- (id)_className;
- (id)_codableDescription;
- (long long)_code;
- (long long)_codeWithName:(id)arg1;
- (bool)_commonInit;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (bool)_enumerateWithValueProcessingBlock:(id /* block */)arg1;
- (id)_inCodable;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_instanceDescription;
- (long long)_intentHandlingStatus;
- (id)_intentResponseCodableCode;
- (long long)_intentResponseCode;
- (id)_intents_cacheableObjects;
- (bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(id /* block */)arg2;
- (void)_intents_prepareResponse;
- (long long)_intents_toggleState;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (bool)_isSuccess;
- (bool)_isValidKey:(id)arg1;
- (id)_keyImage;
- (id)_originatingBundleIdentifier;
- (id)_payloadResponseMessageData;
- (id)_payloadResponseTypeName;
- (id)_propertiesByNameForLanguage:(id)arg1;
- (id)_propertiesByNameWithLocalizer:(id)arg1;
- (id)_querySchemaWithBlock:(id /* block */)arg1;
- (id)_redactedDictionaryRepresentation;
- (id)_renderedResponseForLanguage:(id)arg1 requiresSiriCompatibility:(bool)arg2;
- (id)_renderedResponseWithLocalizer:(id)arg1 requiresSiriCompatibility:(bool)arg2;
- (bool)_requiresAuthentication;
- (bool)_requiresProtectedData;
- (id)_responseMessagePBRepresentation;
- (id)_responseTemplateForLanguage:(id)arg1;
- (id)_responseTemplateForLanguage:(id)arg1 requiresSiriCompatibility:(bool)arg2;
- (id)_responseTemplateWithLocalizer:(id)arg1;
- (id)_responseTemplateWithLocalizer:(id)arg1 requiresSiriCompatibility:(bool)arg2;
- (void)_setCode:(long long)arg1;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (void)_setPayloadResponseTypeName:(id)arg1;
- (void)_setRequiresAuthentication:(bool)arg1;
- (void)_setRequiresProtectedData:(bool)arg1;
- (void)_setResponseMessagePBRepresentation:(id)arg1;
- (void)_setStage:(long long)arg1;
- (bool)_shouldForwardIntentToApp;
- (long long)_stage;
- (long long)_stageWithName:(id)arg1;
- (long long)_type;
- (void)_updateWithJSONDictionary:(id)arg1;
- (bool)_userConfirmationRequired;
- (id)backingStore;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (id)intentSlotDescriptions;
- (id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2;
- (id)propertiesByName;
- (void)setCode:(long long)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)userActivity;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

- (id)cmsCoded;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (void)wf_getOutputValueWithCompletionHandler:(id /* block */)arg1;

@end
