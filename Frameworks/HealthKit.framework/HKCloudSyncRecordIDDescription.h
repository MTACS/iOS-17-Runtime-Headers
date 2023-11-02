
@interface HKCloudSyncRecordIDDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _recordName;
}

@property (nonatomic, readonly, copy) NSString *recordName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordName:(id)arg1;
- (id)recordName;

@end
