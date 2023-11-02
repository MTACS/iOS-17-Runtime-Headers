
@interface PKPartialShareInvitation : NSObject <NSSecureCoding> {
    PKSharingMessageDisplayInformation * _displayInformation;
    NSData * _homeInvite;
    PKSecureElementPass * _pass;
    NSString * _recipientHandle;
    NSString * _recipientNickname;
    PKPassShare * _share;
}

@property (nonatomic, readonly) PKSharingMessageDisplayInformation *displayInformation;
@property (nonatomic, readonly) NSData *homeInvite;
@property (nonatomic, readonly) bool isHomeShare;
@property (nonatomic, readonly) PKSecureElementPass *pass;
@property (nonatomic, retain) NSString *recipientHandle;
@property (nonatomic, retain) NSString *recipientNickname;
@property (nonatomic, readonly) PKPassShare *share;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayInformation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeInvite;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeInvite:(id)arg1 displayInformation:(id)arg2;
- (id)initWithShare:(id)arg1 pass:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPartialShareInvitation:(id)arg1;
- (bool)isHomeShare;
- (id)pass;
- (id)recipientHandle;
- (id)recipientNickname;
- (void)setRecipientHandle:(id)arg1;
- (void)setRecipientNickname:(id)arg1;
- (id)share;

@end
