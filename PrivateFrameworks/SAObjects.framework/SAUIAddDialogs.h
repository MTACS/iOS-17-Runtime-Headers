
@interface SAUIAddDialogs : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *dialogs;
@property (nonatomic, copy) NSNumber *listenAfterSpeaking;
@property (nonatomic, retain) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (nonatomic, retain) SAUIRequestEndBehavior *requestEndBehavior;
@property (nonatomic, copy) NSString *responseMode;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)dialogs;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listenAfterSpeaking;
- (id)listenAfterSpeakingBehavior;
- (id)requestEndBehavior;
- (bool)requiresResponse;
- (id)responseMode;
- (void)setDialogs:(id)arg1;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setListenAfterSpeakingBehavior:(id)arg1;
- (void)setRequestEndBehavior:(id)arg1;
- (void)setResponseMode:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (long long)sruif_usefulUserResultType;

@end
