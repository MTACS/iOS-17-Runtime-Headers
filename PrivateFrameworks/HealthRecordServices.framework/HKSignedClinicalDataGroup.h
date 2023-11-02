
@interface HKSignedClinicalDataGroup : NSObject <NSCopying, NSSecureCoding> {
    HKSignedClinicalDataQRRepresentation * _QRRepresentation;
    NSArray * _clinicalRecords;
    HKSignedClinicalDataRecord * _mainRecord;
    NSArray * _medicalRecords;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) HKSignedClinicalDataQRRepresentation *QRRepresentation;
@property (nonatomic, readonly, copy) NSArray *clinicalRecords;
@property (nonatomic, readonly, copy) HKSignedClinicalDataRecord *mainRecord;
@property (nonatomic, readonly, copy) NSArray *medicalRecords;
@property (nonatomic, readonly) unsigned long long options;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)QRRepresentation;
- (id)clinicalRecords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 mainRecord:(id)arg2 medicalRecords:(id)arg3 clinicalRecords:(id)arg4 QRRepresentation:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mainRecord;
- (id)medicalRecords;
- (unsigned long long)options;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)deletionConfirmationMessageWhenDeletingRecord:(id)arg1;

@end
