
@interface MSDDefaultsInfo : NSObject <NSSecureCoding> {
    NSUUID * _homeID;
    NSUUID * _homeUserID;
    NSString * _recordName;
    NSString * _recordType;
    NSString * _recordZoneName;
    MediaService * _service;
}

@property (nonatomic, readonly) NSUUID *homeID;
@property (nonatomic, readonly) NSUUID *homeUserID;
@property (nonatomic, copy) NSString *recordName;
@property (nonatomic, copy) NSString *recordType;
@property (nonatomic, copy) NSString *recordZoneName;
@property (nonatomic, readonly) MediaService *service;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeID;
- (id)homeUserID;
- (id)initWithCoder:(id)arg1;
- (id)initWithService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (id)service;
- (void)setRecordName:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setRecordZoneName:(id)arg1;

@end
