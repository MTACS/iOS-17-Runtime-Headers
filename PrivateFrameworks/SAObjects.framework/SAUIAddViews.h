
@interface SAUIAddViews : SABaseClientBoundCommand <AFAceCommandClientFeedbackEnumerating, SAConditionallyMutatingClientBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dialogPhase;
@property (nonatomic, copy) NSString *displayTarget;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool immersiveExperience;
@property (nonatomic) bool mutatingCommand;
@property (nonatomic, copy) NSString *patternId;
@property (nonatomic, copy) NSString *patternType;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, retain) SASendCommands *refreshCommand;
@property (nonatomic, retain) SAUIRequestEndBehavior *requestEndBehavior;
@property (nonatomic) bool requiresResponse;
@property (nonatomic, copy) NSString *responseMode;
@property (nonatomic) bool scrollToTop;
@property (readonly) Class superclass;
@property (nonatomic) bool supplemental;
@property (nonatomic) bool temporary;
@property (nonatomic, copy) NSArray *views;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogPhase;
- (id)displayTarget;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)immersiveExperience;
- (bool)mutatingCommand;
- (id)patternId;
- (id)patternType;
- (id)refreshCommand;
- (id)requestEndBehavior;
- (bool)requiresResponse;
- (id)responseMode;
- (bool)scrollToTop;
- (void)setDialogPhase:(id)arg1;
- (void)setDisplayTarget:(id)arg1;
- (void)setImmersiveExperience:(bool)arg1;
- (void)setMutatingCommand:(bool)arg1;
- (void)setPatternId:(id)arg1;
- (void)setPatternType:(id)arg1;
- (void)setRefreshCommand:(id)arg1;
- (void)setRequestEndBehavior:(id)arg1;
- (void)setRequiresResponse:(bool)arg1;
- (void)setResponseMode:(id)arg1;
- (void)setScrollToTop:(bool)arg1;
- (void)setSupplemental:(bool)arg1;
- (void)setTemporary:(bool)arg1;
- (void)setViews:(id)arg1;
- (bool)supplemental;
- (bool)temporary;
- (id)views;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)_af_enumerateClientFeedbackDetails:(id /* block */)arg1;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (id)af_dialogPhase;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (id)sruif_dialogPhase;
- (long long)sruif_usefulUserResultType;

@end
