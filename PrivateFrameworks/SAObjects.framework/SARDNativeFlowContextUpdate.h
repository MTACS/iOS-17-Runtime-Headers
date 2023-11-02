
@interface SARDNativeFlowContextUpdate : SABaseCommand <AFContextSnapshot, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *applicationContext;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSArray *clientFlowUpdateContextList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *pegasusConversationContext;
@property (nonatomic, copy) NSData *promptContextProto;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic) bool resetFlowTaskState;
@property (nonatomic, retain) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (readonly) Class superclass;
@property (nonatomic, retain) SASVSystemDialogActOutput *systemDialogActOutput;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)applicationContext;
- (id)attachments;
- (id)clientFlowUpdateContextList;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)pegasusConversationContext;
- (id)promptContextProto;
- (bool)requiresResponse;
- (bool)resetFlowTaskState;
- (void)setApplicationContext:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setClientFlowUpdateContextList:(id)arg1;
- (void)setPegasusConversationContext:(id)arg1;
- (void)setPromptContextProto:(id)arg1;
- (void)setResetFlowTaskState:(bool)arg1;
- (void)setSiriKitMetrics:(id)arg1;
- (void)setSystemDialogActOutput:(id)arg1;
- (id)siriKitMetrics;
- (id)systemDialogActOutput;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

@end
