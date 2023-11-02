
@interface AACustodianInvitationResponseContext : NSObject <NSSecureCoding> {
    bool  _accepted;
    bool  _autoAction;
    NSUUID * _custodianID;
}

@property (getter=isAccepted, nonatomic) bool accepted;
@property (getter=isAutoAction, nonatomic) bool autoAction;
@property (nonatomic, copy) NSUUID *custodianID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)custodianID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustodianID:(id)arg1 didAccept:(bool)arg2;
- (bool)isAccepted;
- (bool)isAutoAction;
- (void)setAccepted:(bool)arg1;
- (void)setAutoAction:(bool)arg1;
- (void)setCustodianID:(id)arg1;

@end
