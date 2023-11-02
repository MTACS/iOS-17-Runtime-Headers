
@interface CHIPAccessoryFirmwareRecord : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _cdVersionNumber;
    CKRecord * _ckRecord;
    NSString * _firmwareBinaryHash;
    NSString * _firmwareFileSize;
    NSString * _firmwareURL;
    NSString * _firmwareVersion;
    NSNumber * _firmwareVersionNumber;
    NSNumber * _hashAlgorithmType;
    NSObject<OS_os_log> * _log;
    NSNumber * _maxFirmwareVersionNumber;
    NSNumber * _minFirmwareVersionNumber;
    NSString * _recordName;
    NSString * _recordStatus;
    NSDate * _releaseDate;
    NSString * _releaseNotesHash;
    NSString * _releaseNotesURL;
    NSString * _signature;
    NSString * _verificationCertificateID;
}

@property (readonly) NSNumber *cdVersionNumber;
@property (readonly) CKRecord *ckRecord;
@property (readonly) NSString *firmwareBinaryHash;
@property (readonly) NSString *firmwareFileSize;
@property (readonly) NSString *firmwareURL;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSNumber *firmwareVersionNumber;
@property (readonly) NSNumber *hashAlgorithmType;
@property (readonly) NSNumber *maxFirmwareVersionNumber;
@property (readonly) NSNumber *minFirmwareVersionNumber;
@property (readonly) NSString *recordName;
@property (readonly) NSString *recordStatus;
@property (readonly) NSDate *releaseDate;
@property (readonly) NSString *releaseNotesHash;
@property (readonly) NSString *releaseNotesURL;
@property (readonly) NSString *signature;
@property (readonly) NSString *verificationCertificateID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cdVersionNumber;
- (id)ckRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareBinaryHash;
- (id)firmwareFileSize;
- (id)firmwareURL;
- (id)firmwareVersion;
- (id)firmwareVersionNumber;
- (id)hashAlgorithmType;
- (id)initWithCKRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maxFirmwareVersionNumber;
- (id)minFirmwareVersionNumber;
- (id)recordName;
- (id)recordStatus;
- (id)releaseDate;
- (id)releaseNotesHash;
- (id)releaseNotesURL;
- (id)signature;
- (id)verificationCertificateID;

@end
