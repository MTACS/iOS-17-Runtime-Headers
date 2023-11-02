
@interface PKCloudStoreZoneQueryConfiguration : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    long long  _accountType;
    NSString * _altDSID;
    unsigned long long  _itemType;
    NSString * _recordName;
    NSString * _transactionSourceIdentifier;
    NSString * _zoneName;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) NSString *recordName;
@property (nonatomic, copy) NSString *transactionSourceIdentifier;
@property (nonatomic, readonly) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (long long)accountType;
- (id)altDSID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemType:(unsigned long long)arg1 recordName:(id)arg2;
- (id)initWithTransactionSourceIdentifier:(id)arg1 accountIdentifier:(id)arg2 accountType:(long long)arg3 accountEventIdentifier:(id)arg4 altDSID:(id)arg5 zoneName:(id)arg6;
- (id)initWithTransactionSourceIdentifier:(id)arg1 accountIdentifier:(id)arg2 accountType:(long long)arg3 serviceIdentifier:(id)arg4 altDSID:(id)arg5 zoneName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemType;
- (id)recordName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(long long)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setTransactionSourceIdentifier:(id)arg1;
- (id)transactionSourceIdentifier;
- (id)zoneName;

@end
