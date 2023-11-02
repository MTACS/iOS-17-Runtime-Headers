
@interface ASDAccountLookupResponse : ASDRequestResponse {
    NSNumber * _accountID;
    bool  _askToBuyEnabled;
}

@property (copy) NSNumber *accountID;
@property bool askToBuyEnabled;
@property (copy) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (bool)askToBuyEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccountID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccountID:(id)arg1;
- (void)setAskToBuyEnabled:(bool)arg1;

@end
