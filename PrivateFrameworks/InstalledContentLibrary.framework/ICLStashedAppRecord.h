
@interface ICLStashedAppRecord : ICLAppRecord <NSCopying, NSSecureCoding> {
    NSDate * _stashOriginalInstallTimestamp;
    NSDate * _stashedAtTimestamp;
}

@property (nonatomic, copy) NSDate *stashOriginalInstallTimestamp;
@property (nonatomic, copy) NSDate *stashedAtTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyRecordDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)legacyRecordDictionary;
- (void)setStashOriginalInstallTimestamp:(id)arg1;
- (void)setStashedAtTimestamp:(id)arg1;
- (id)stashOriginalInstallTimestamp;
- (id)stashedAtTimestamp;

@end
