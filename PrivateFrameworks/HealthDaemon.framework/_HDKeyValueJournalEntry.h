
@interface _HDKeyValueJournalEntry : HDJournalEntry {
    long long  _category;
    NSString * _domain;
    NSString * _key;
    NSDate * _modificationDate;
    long long  _provenance;
    long long  _syncIdentity;
    long long  _updatePolicy;
    <NSSecureCoding> * _value;
}

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(long long)arg4 provenance:(long long)arg5 syncIdentity:(long long)arg6 updatePolicy:(long long)arg7 modificationDate:(id)arg8;

@end
