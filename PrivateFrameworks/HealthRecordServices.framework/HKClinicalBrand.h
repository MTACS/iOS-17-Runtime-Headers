
@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding> {
    NSString * _batchID;
    NSString * _externalID;
}

@property (nonatomic, readonly, copy) NSString *batchID;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (getter=isFakeBrandForTestAccounts, nonatomic, readonly) bool fakeBrandForTestAccounts;
@property (nonatomic, readonly) bool isLocalDevelopmentSampleBrand;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

+ (id)createFakeBrandForTestAccounts;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)batchID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 batchID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFakeBrandForTestAccounts;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)localDevelopmentSampleBrand;

- (bool)isLocalDevelopmentSampleBrand;

@end
