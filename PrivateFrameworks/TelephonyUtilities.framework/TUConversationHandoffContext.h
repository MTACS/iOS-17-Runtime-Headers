
@interface TUConversationHandoffContext : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _invitationPreferences;
    bool  _prefersToPlayDuringWombat;
    TUConversationPresentationContext * _presentationContext;
}

@property (nonatomic, copy) NSSet *invitationPreferences;
@property (nonatomic) bool prefersToPlayDuringWombat;
@property (nonatomic, copy) TUConversationPresentationContext *presentationContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)invitationPreferences;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHandoffContext:(id)arg1;
- (bool)prefersToPlayDuringWombat;
- (id)presentationContext;
- (void)setInvitationPreferences:(id)arg1;
- (void)setPrefersToPlayDuringWombat:(bool)arg1;
- (void)setPresentationContext:(id)arg1;

@end
