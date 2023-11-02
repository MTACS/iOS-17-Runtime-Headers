
@interface SAAceView : SABaseAceObject <AFAceCommandClientFeedbackEnumerating, SAAceSerializable>

@property (nonatomic) bool canBeRefreshed;
@property (nonatomic) bool canUseServerTTS;
@property (nonatomic, retain) <SAAceSerializable> *context;
@property (nonatomic, copy) NSString *correspondingSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSNumber *deferredRendering;
@property (nonatomic, copy) NSNumber *delayDismissalMs;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SADialog *dialog;
@property (nonatomic) bool disableDeviceRacing;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTransient;
@property (nonatomic, copy) NSString *itemType;
@property (nonatomic, copy) NSNumber *listenAfterSpeaking;
@property (nonatomic, retain) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (nonatomic) bool preserveResultSpaceIfPossible;
@property (nonatomic, copy) NSDictionary *speakableContextInfo;
@property (nonatomic, copy) NSString *speakableText;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *viewId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)aceView;
+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;

- (bool)canBeRefreshed;
- (bool)canUseServerTTS;
- (id)context;
- (id)correspondingSessionID;
- (id)deferredRendering;
- (id)delayDismissalMs;
- (id)dialog;
- (bool)disableDeviceRacing;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)isTransient;
- (id)itemType;
- (id)listenAfterSpeaking;
- (id)listenAfterSpeakingBehavior;
- (bool)preserveResultSpaceIfPossible;
- (void)setCanBeRefreshed:(bool)arg1;
- (void)setCanUseServerTTS:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setCorrespondingSessionID:(id)arg1;
- (void)setDeferredRendering:(id)arg1;
- (void)setDelayDismissalMs:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setDisableDeviceRacing:(bool)arg1;
- (void)setIsTransient:(bool)arg1;
- (void)setItemType:(id)arg1;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setListenAfterSpeakingBehavior:(id)arg1;
- (void)setPreserveResultSpaceIfPossible:(bool)arg1;
- (void)setSpeakableContextInfo:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)speakableContextInfo;
- (id)speakableText;
- (id)viewId;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)_af_dialogIdentifier;
- (id)_af_dialogPhase;
- (void)_af_enumerateClientFeedbackDetails:(id /* block */)arg1;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (bool)sruif_hasButton;

// Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX

- (void)svx_applyParsedExpression:(id)arg1;
- (id)svx_parseableExpression;

@end
