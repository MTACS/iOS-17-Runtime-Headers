
@interface SASmsSms : SADomainObject

@property (nonatomic, retain) SAAppInfo *appInfo;
@property (nonatomic, copy) NSURL *attachment;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, copy) NSString *chatIdentifier;
@property (nonatomic, copy) NSDate *dateLastMessageReadInThread;
@property (nonatomic, copy) NSDate *dateReadingStarted;
@property (nonatomic, copy) NSDate *dateSent;
@property (nonatomic, copy) NSString *effect;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupNameId;
@property (nonatomic) bool hasGroupName;
@property (nonatomic, copy) NSNumber *isAudioMessage;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *messageType;
@property (nonatomic, copy) NSArray *msgRecipients;
@property (nonatomic, retain) SAPersonAttribute *msgSender;
@property (nonatomic, copy) NSNumber *outgoing;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, retain) SASmsSms *referencedMessage;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *timezoneId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)sms;
+ (id)smsWithDictionary:(id)arg1 context:(id)arg2;

- (id)appInfo;
- (id)attachment;
- (id)attachments;
- (id)chatIdentifier;
- (id)dateLastMessageReadInThread;
- (id)dateReadingStarted;
- (id)dateSent;
- (id)effect;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)groupName;
- (id)groupNameId;
- (bool)hasGroupName;
- (id)isAudioMessage;
- (id)message;
- (id)messageType;
- (id)msgRecipients;
- (id)msgSender;
- (id)outgoing;
- (id)recipients;
- (id)referencedMessage;
- (id)sender;
- (void)setAppInfo:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setChatIdentifier:(id)arg1;
- (void)setDateLastMessageReadInThread:(id)arg1;
- (void)setDateReadingStarted:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupNameId:(id)arg1;
- (void)setHasGroupName:(bool)arg1;
- (void)setIsAudioMessage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageType:(id)arg1;
- (void)setMsgRecipients:(id)arg1;
- (void)setMsgSender:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setReferencedMessage:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimezoneId:(id)arg1;
- (id)subject;
- (id)timezoneId;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_messageValue;

// Image: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX

- (bool)svx_isDeferredExpressionContextObject;

@end
