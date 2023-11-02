
@interface HDDataOriginProvenance : NSObject <NSCopying, NSSecureCoding> {
    HDContributorReference * _contributorReference;
    NSNumber * _deviceID;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
    NSString * _productType;
    NSNumber * _sourceID;
    NSString * _sourceVersion;
    long long  _syncIdentity;
    long long  _syncProvenance;
    NSString * _systemBuild;
    NSString * _timeZoneName;
}

@property (nonatomic, retain) HDContributorReference *contributorReference;
@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, retain) NSNumber *sourceID;
@property (nonatomic, copy) NSString *sourceVersion;
@property (nonatomic) long long syncIdentity;
@property (nonatomic) long long syncProvenance;
@property (nonatomic, copy) NSString *systemBuild;
@property (nonatomic, copy) NSString *timeZoneName;

+ (id)dataProvenanceWithSyncProvenance:(long long)arg1 syncIdentity:(long long)arg2 productType:(id)arg3 systemBuild:(id)arg4 operatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg5 sourceVersion:(id)arg6 timeZoneName:(id)arg7 sourceID:(id)arg8 deviceID:(id)arg9 contributorReference:(id)arg10;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contributorID;
- (id)contributorReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (id)productType;
- (void)setContributorReference:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setProductType:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setSyncIdentity:(long long)arg1;
- (void)setSyncProvenance:(long long)arg1;
- (void)setSystemBuild:(id)arg1;
- (void)setTimeZoneName:(id)arg1;
- (id)sourceID;
- (id)sourceVersion;
- (long long)syncIdentity;
- (long long)syncProvenance;
- (id)systemBuild;
- (id)timeZoneName;

@end
