
@interface ICDelegationConsumerServiceSessionRequestInfo : NSObject {
    unsigned long long  _accountID;
    unsigned long long  _fairPlaySessionID;
}

@property (nonatomic, readonly) unsigned long long accountID;
@property (nonatomic, readonly) unsigned long long fairPlaySessionID;

- (unsigned long long)accountID;
- (unsigned long long)fairPlaySessionID;
- (unsigned long long)hash;
- (id)initWithAccountID:(unsigned long long)arg1 fairPlaySessionID:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end
