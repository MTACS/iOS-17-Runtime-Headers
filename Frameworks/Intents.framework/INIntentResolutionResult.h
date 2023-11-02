
@interface INIntentResolutionResult : NSObject <CMSCoding, INIntentResolutionResultDataProviding, INIntentResolutionResultExport> {
    NSArray * _alternatives;
    unsigned long long  _confirmationReason;
    NSArray * _disambiguationItems;
    INIntent * _intentToExecute;
    id  _itemToConfirm;
    long long  _resolutionResultCode;
    id  _resolvedValue;
    unsigned long long  _unsupportedReason;
}

@property (nonatomic, retain) NSArray *alternatives;
@property (nonatomic) unsigned long long confirmationReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *disambiguationItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INIntent *intentToExecute;
@property (nonatomic, retain) id itemToConfirm;
@property (nonatomic) long long resolutionResultCode;
@property (nonatomic, retain) id resolvedValue;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long unsupportedReason;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_dataForResolutionMethodUnimplemented;
+ (id)_resolutionResultWithData:(id)arg1 slotDescription:(id)arg2;
+ (id)confirmationRequiredWithItemToConfirm:(id)arg1 forReason:(long long)arg2;
+ (id)needsValue;
+ (id)notRequired;
+ (id)requiresExecutionOfIntent:(id)arg1;
+ (id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+ (id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+ (id)resolutionResultNeedsValue;
+ (id)resolutionResultNotRequired;
+ (id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+ (id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2;
+ (id)unsupported;
+ (id)unsupportedWithReason:(long long)arg1;

- (void).cxx_destruct;
- (id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)_dataForIntentSlotDescription:(id)arg1;
- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)_initWithResolutionResult:(id)arg1;
- (id)_initWithResultCode:(long long)arg1;
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_objectForIntentSlotValue:(id)arg1 slotDescription:(id)arg2;
- (id)_stringForResultCode:(long long)arg1;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)alternatives;
- (unsigned long long)confirmationReason;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)disambiguationItems;
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;
- (id)intentToExecute;
- (id)itemToConfirm;
- (long long)resolutionResultCode;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id*)arg3;
- (id)resolvedValue;
- (void)setAlternatives:(id)arg1;
- (void)setConfirmationReason:(unsigned long long)arg1;
- (void)setDisambiguationItems:(id)arg1;
- (void)setIntentToExecute:(id)arg1;
- (void)setItemToConfirm:(id)arg1;
- (void)setResolutionResultCode:(long long)arg1;
- (void)setResolvedValue:(id)arg1;
- (void)setUnsupportedReason:(unsigned long long)arg1;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(id /* block */)arg4;
- (unsigned long long)unsupportedReason;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (id)cmsCoded;

@end
