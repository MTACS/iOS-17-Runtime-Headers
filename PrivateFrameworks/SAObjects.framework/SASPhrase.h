
@interface SASPhrase : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *interpretations;
@property (nonatomic) bool lowConfidence;
@property (nonatomic) bool speechRepairApplied;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)phrase;
+ (id)phraseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interpretations;
- (bool)lowConfidence;
- (void)setInterpretations:(id)arg1;
- (void)setLowConfidence:(bool)arg1;
- (void)setSpeechRepairApplied:(bool)arg1;
- (bool)speechRepairApplied;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_speechInterpretations;

@end