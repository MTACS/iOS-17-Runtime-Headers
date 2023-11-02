
@interface PKSharingMessageExtensionRelayServerLocalProperties : NSObject <NSSecureCoding> {
    NSData * _analyticsSessionToken;
    bool  _hasCheckedStatus;
    PKPartialShareInvitation * _partialInvite;
    NSString * _passUniqueIdentifier;
}

@property (nonatomic, retain) NSData *analyticsSessionToken;
@property (nonatomic) bool hasCheckedStatus;
@property (nonatomic, retain) PKPartialShareInvitation *partialInvite;
@property (nonatomic, retain) NSString *passUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsSessionToken;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCheckedStatus;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharingMessageExtensionRelayServerLocalProperties:(id)arg1;
- (id)partialInvite;
- (id)passUniqueIdentifier;
- (void)setAnalyticsSessionToken:(id)arg1;
- (void)setHasCheckedStatus:(bool)arg1;
- (void)setPartialInvite:(id)arg1;
- (void)setPassUniqueIdentifier:(id)arg1;

@end
