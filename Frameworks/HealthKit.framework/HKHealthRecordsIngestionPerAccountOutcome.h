
@interface HKHealthRecordsIngestionPerAccountOutcome : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _accountIdentifier;
    unsigned long long  _info;
}

@property (nonatomic, readonly, copy) NSUUID *accountIdentifier;
@property (nonatomic, readonly) unsigned long long info;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedInfoStringJoinedByString:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)info;
- (id)initWithAccountIdentifier:(id)arg1 info:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
