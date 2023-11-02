
@interface _LTTranslationSensesLoggingRequest : NSObject <_LTLoggingRequest> {
    NSString * _conversationID;
    NSString * _requestID;
    NSArray * _senses;
    NSArray * _userInteractedSenses;
}

@property (nonatomic, copy) NSString *conversationID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, copy) NSArray *senses;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *userInteractedSenses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestID;
- (id)senses;
- (void)setConversationID:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setSenses:(id)arg1;
- (void)setUserInteractedSenses:(id)arg1;
- (id)userInteractedSenses;

@end
