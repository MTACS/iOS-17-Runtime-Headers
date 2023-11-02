
@interface HDInsertOrUpdateDeviceKeyValueEntryOperation : HDJournalableOperation {
    long long  _category;
    HDDeviceContext * _deviceContext;
    NSString * _domainName;
    NSString * _key;
    NSDate * _modificationDate;
    NSData * _value;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategory:(long long)arg1 key:(id)arg2 value:(id)arg3 domain:(id)arg4 deviceContext:(id)arg5 modificationDate:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)transactionContext;

@end
