
@interface SASAudioAnalytics : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSDictionary *acousticFeatures;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *speechRecognitionFeatures;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)audioAnalytics;
+ (id)audioAnalyticsWithDictionary:(id)arg1 context:(id)arg2;

- (id)acousticFeatures;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAcousticFeatures:(id)arg1;
- (void)setSpeechRecognitionFeatures:(id)arg1;
- (id)speechRecognitionFeatures;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_audioAnalytics;

@end
