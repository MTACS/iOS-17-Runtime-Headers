
@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (void)truncateSwitchRecords;

@end
