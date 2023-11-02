
@interface ICContentKeyStoreEntry : NSObject {
    NSNumber * _accountDSID;
    NSNumber * _adamID;
    unsigned long long  _failureCount;
    NSString * _identifier;
    NSData * _keyData;
    long long  _keyServerProtocolType;
    NSDate * _renewalDate;
}

@property (nonatomic, copy) NSNumber *accountDSID;
@property (nonatomic, copy) NSNumber *adamID;
@property (nonatomic) unsigned long long failureCount;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSData *keyData;
@property (nonatomic) long long keyServerProtocolType;
@property (nonatomic, copy) NSDate *renewalDate;

- (void).cxx_destruct;
- (id)accountDSID;
- (id)adamID;
- (id)dictionaryRepresentation;
- (unsigned long long)failureCount;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)keyData;
- (long long)keyServerProtocolType;
- (id)renewalDate;
- (void)setAccountDSID:(id)arg1;
- (void)setAdamID:(id)arg1;
- (void)setFailureCount:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyData:(id)arg1;
- (void)setKeyServerProtocolType:(long long)arg1;
- (void)setRenewalDate:(id)arg1;

@end
