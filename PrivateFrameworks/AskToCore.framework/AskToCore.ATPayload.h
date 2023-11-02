
@interface AskToCore.ATPayload : NSObject <NSCopying, NSSecureCoding> {
    void allResponses;
    void clientBundleIdentifier;
    void messageGUID;
    void question;
    void receivingRecipientGroup;
    void response;
    void version;
}

@property (nonatomic, readonly) NSArray *allResponses;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *messageGUID;
@property (nonatomic, readonly) _TtC5AskTo10ATQuestion *question;
@property (nonatomic, readonly) short receivingRecipientGroup;
@property (nonatomic, readonly) _TtC9AskToCore10ATResponse *response;
@property (nonatomic, readonly) short version;

+ (short)currentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allResponses;
- (id)clientBundleIdentifier;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithClientBundleIdentifier:(id)arg1 receivingRecipientGroup:(short)arg2 question:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCopying:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithOriginalPayload:(id)arg1 newResponse:(id)arg2;
- (id)initWithVersion:(short)arg1 clientBundleIdentifier:(id)arg2 messageGUID:(id)arg3 receivingRecipientGroup:(short)arg4 question:(id)arg5 response:(id)arg6 allResponses:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)messageGUID;
- (id)question;
- (short)receivingRecipientGroup;
- (id)response;
- (short)version;

@end
