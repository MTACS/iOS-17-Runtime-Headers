
@interface MEMessage : NSObject <EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    NSDate * _dateReceived;
    NSDate * _dateSent;
    long long  _encryptionState;
    MEEmailAddress * _fromAddress;
    NSDictionary * _headers;
    NSData * _rawData;
    MEMessageRecipients * _recipients;
    MEMessageSenderMetadata * _senderMetadata;
    long long  _state;
    NSString * _subject;
}

@property (nonatomic, readonly, copy) NSArray *allRecipientAddresses;
@property (nonatomic, readonly, copy) NSArray *bccAddresses;
@property (nonatomic, readonly, copy) NSArray *ccAddresses;
@property (nonatomic, readonly, copy) NSDate *dateReceived;
@property (nonatomic, readonly, copy) NSDate *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) long long encryptionState;
@property (nonatomic, readonly, copy) MEEmailAddress *fromAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *headers;
@property (nonatomic, readonly, copy) NSData *rawData;
@property (nonatomic, retain) MEMessageRecipients *recipients;
@property (nonatomic, readonly, copy) NSArray *replyToAddresses;
@property (nonatomic, retain) MEMessageSenderMetadata *senderMetadata;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *toAddresses;

+ (id)_protectedHeaders;
+ (bool)extensionCanSetHeaderKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sanitaizedHeadersForHeaders:(id)arg1;
- (id)allRecipientAddresses;
- (id)bccAddresses;
- (id)ccAddresses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)dateSent;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (long long)encryptionState;
- (id)fromAddress;
- (unsigned long long)hash;
- (id)headers;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(long long)arg1 encryptionState:(long long)arg2 subject:(id)arg3 recipients:(id)arg4 from:(id)arg5 dataSent:(id)arg6 dateReceived:(id)arg7 headers:(id)arg8 rawData:(id)arg9 senderMetadata:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)rawData;
- (id)recipients;
- (id)replyToAddresses;
- (id)senderMetadata;
- (void)setRecipients:(id)arg1;
- (void)setSenderMetadata:(id)arg1;
- (long long)state;
- (id)subject;
- (id)toAddresses;

@end
