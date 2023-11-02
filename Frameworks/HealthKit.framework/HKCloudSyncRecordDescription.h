
@interface HKCloudSyncRecordDescription : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _childRecordDescriptions;
    NSString * _detailedDescription;
    NSDate * _modificationDate;
    HKCloudSyncRecordIDDescription * _recordIDDescription;
    NSString * _recordType;
    NSNumber * _schemaVersion;
}

@property (nonatomic, readonly, copy) NSArray *childRecordDescriptions;
@property (nonatomic, readonly, copy) NSString *detailedDescription;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) HKCloudSyncRecordIDDescription *recordIDDescription;
@property (nonatomic, readonly, copy) NSString *recordType;
@property (nonatomic, readonly, copy) NSNumber *schemaVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)childRecordDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordIDDescription:(id)arg1 recordType:(id)arg2 schemaVersion:(id)arg3 modificationDate:(id)arg4 detailedDescription:(id)arg5 childRecordDescriptions:(id)arg6;
- (id)modificationDate;
- (id)recordIDDescription;
- (id)recordType;
- (id)schemaVersion;

@end
