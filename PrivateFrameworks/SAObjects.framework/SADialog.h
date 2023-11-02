
@interface SADialog : SABaseAceObject <SAAceSerializable>

@property (nonatomic) bool canUseServerTTS;
@property (nonatomic, retain) SADialogText *caption;
@property (nonatomic, retain) SADialogConfiguration *configuration;
@property (nonatomic, retain) SADialogText *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dialogIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool printedOnly;
@property (nonatomic) bool spokenOnly;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (bool)canUseServerTTS;
- (id)caption;
- (id)configuration;
- (id)content;
- (id)dialogIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)printedOnly;
- (void)setCanUseServerTTS:(bool)arg1;
- (void)setCaption:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDialogIdentifier:(id)arg1;
- (void)setPrintedOnly:(bool)arg1;
- (void)setSpokenOnly:(bool)arg1;
- (bool)spokenOnly;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;

@end
