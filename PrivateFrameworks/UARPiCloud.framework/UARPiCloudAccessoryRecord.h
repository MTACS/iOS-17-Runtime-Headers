
@interface UARPiCloudAccessoryRecord : NSObject <NSCopying, NSSecureCoding> {
    CKRecord * _ckRecord;
    NSArray * _deploymentList;
    NSString * _deploymentStr;
    NSString * _firmwareBinaryHash;
    NSString * _firmwareFileSize;
    NSString * _firmwareURL;
    NSString * _firmwareVersion;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _recordName;
    NSString * _recordStatus;
    NSString * _releaseDate;
    NSString * _releaseNotesFileSize;
    NSString * _releaseNotesHash;
    NSString * _releaseNotesURL;
    NSString * _releaseType;
    NSString * _signature;
    NSString * _updateClassification;
}

@property (readonly) CKRecord *ckRecord;
@property (readonly) NSArray *deploymentList;
@property (readonly) NSString *deploymentStr;
@property (readonly) NSString *firmwareBinaryHash;
@property (readonly) NSString *firmwareFileSize;
@property (readonly) NSString *firmwareURL;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *recordName;
@property (readonly) NSString *recordStatus;
@property (readonly) NSString *releaseDate;
@property (readonly) NSString *releaseNotesFileSize;
@property (readonly) NSString *releaseNotesHash;
@property (readonly) NSString *releaseNotesURL;
@property (readonly) NSString *releaseType;
@property (readonly) NSString *signature;
@property (readonly) NSString *updateClassification;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ckRecord;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deploymentList;
- (id)deploymentStr;
- (id)description;
- (void)dumpWithTabDepth:(unsigned long long)arg1 dumpString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareBinaryHash;
- (id)firmwareFileSize;
- (id)firmwareURL;
- (id)firmwareVersion;
- (id)initWithCKRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manufacturer;
- (id)model;
- (id)recordName;
- (id)recordStatus;
- (id)releaseDate;
- (id)releaseNotesFileSize;
- (id)releaseNotesHash;
- (id)releaseNotesURL;
- (id)releaseType;
- (id)signature;
- (id)updateClassification;

@end
