
@interface CTStewieEmergencyStartMessage : NSObject <CTStewieMessageOutgoing> {
    long long  _conversationID;
    long long  _notifyOption;
    NSData * _serializedQuestionnaireAnswers;
    bool  _shareEED;
}

@property (nonatomic) long long conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long notifyOption;
@property (nonatomic, retain) NSData *serializedQuestionnaireAnswers;
@property (nonatomic) bool shareEED;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedSendTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEmergencyStartMessage:(id)arg1;
- (long long)notifyOption;
- (id)serializedQuestionnaireAnswers;
- (void)setConversationID:(long long)arg1;
- (void)setNotifyOption:(long long)arg1;
- (void)setSerializedQuestionnaireAnswers:(id)arg1;
- (void)setShareEED:(bool)arg1;
- (bool)shareEED;

@end
