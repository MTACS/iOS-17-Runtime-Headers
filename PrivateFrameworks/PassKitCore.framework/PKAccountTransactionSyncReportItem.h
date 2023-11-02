
@interface PKAccountTransactionSyncReportItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    NSString * _recordName;
    NSString * _recordType;
    NSString * _transactionServiceIdentifier;
    NSString * _zoneName;
}

@property (nonatomic, readonly, copy) NSString *altDSID;
@property (nonatomic, readonly, copy) NSString *recordName;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, readonly, copy) NSString *transactionServiceIdentifier;
@property (nonatomic, readonly, copy) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransactionServiceIdentifier:(id)arg1 recordName:(id)arg2 recordType:(id)arg3 zoneName:(id)arg4 altDSID:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)recordName;
- (id)recordType;
- (id)transactionServiceIdentifier;
- (id)zoneName;

@end
