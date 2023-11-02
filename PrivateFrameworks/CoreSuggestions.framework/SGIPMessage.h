
@interface SGIPMessage : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _dateSent;
    bool  _isGroupConversation;
    bool  _isSenderSignificant;
    bool  _isSent;
    NSString * _messageId;
    NSArray * _messageUnits;
    NSArray * _recipients;
    SGIPPerson * _sender;
    NSString * _subject;
    NSString * _type;
}

@property (nonatomic, retain) NSDate *dateSent;
@property (nonatomic) bool isGroupConversation;
@property (nonatomic) bool isSenderSignificant;
@property (nonatomic) bool isSent;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic, retain) NSArray *messageUnits;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) SGIPPerson *sender;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSString *type;

+ (id)messageWithIPMessage:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSent;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMessage:(id)arg1;
- (bool)isGroupConversation;
- (bool)isSenderSignificant;
- (bool)isSent;
- (id)messageId;
- (id)messageUnits;
- (id)recipients;
- (id)sender;
- (void)setDateSent:(id)arg1;
- (void)setIsGroupConversation:(bool)arg1;
- (void)setIsSenderSignificant:(bool)arg1;
- (void)setIsSent:(bool)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageUnits:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setType:(id)arg1;
- (id)subject;
- (id)type;

@end
