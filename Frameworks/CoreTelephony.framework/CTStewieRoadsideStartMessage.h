
@interface CTStewieRoadsideStartMessage : NSObject <CTStewieMessageOutgoing> {
    long long  _conversationID;
    bool  _isPayPerUse;
    NSString * _phoneNumber;
    long long  _providerId;
    NSData * _serializedQuestionnaireAnswers;
}

@property (nonatomic) long long conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPayPerUse;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic) long long providerId;
@property (nonatomic, retain) NSData *serializedQuestionnaireAnswers;
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
- (bool)isEqualToRoadsideStartMessage:(id)arg1;
- (bool)isPayPerUse;
- (id)phoneNumber;
- (long long)providerId;
- (id)serializedQuestionnaireAnswers;
- (void)setConversationID:(long long)arg1;
- (void)setIsPayPerUse:(bool)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setProviderId:(long long)arg1;
- (void)setSerializedQuestionnaireAnswers:(id)arg1;

@end
