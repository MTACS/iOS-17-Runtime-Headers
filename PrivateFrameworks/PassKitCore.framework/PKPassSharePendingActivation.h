
@interface PKPassSharePendingActivation : NSObject <NSSecureCoding> {
    bool  _isWaitingOnUserAction;
    PKSharingMessage * _originalInvitation;
    NSString * _shareIdentifier;
}

@property (nonatomic) bool isWaitingOnUserAction;
@property (nonatomic, retain) PKSharingMessage *originalInvitation;
@property (nonatomic, retain) NSString *shareIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassSharePendingActivation:(id)arg1;
- (bool)isWaitingOnUserAction;
- (id)originalInvitation;
- (void)setIsWaitingOnUserAction:(bool)arg1;
- (void)setOriginalInvitation:(id)arg1;
- (void)setShareIdentifier:(id)arg1;
- (id)shareIdentifier;

@end
