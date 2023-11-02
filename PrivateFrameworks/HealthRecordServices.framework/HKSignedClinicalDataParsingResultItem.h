
@interface HKSignedClinicalDataParsingResultItem : NSObject <NSCopying, NSSecureCoding> {
    HKSignedClinicalDataRecord * _mainRecord;
    HDHRSOriginalSignedClinicalDataRecord * _originalRecord;
}

@property (nonatomic, readonly, copy) HKSignedClinicalDataRecord *mainRecord;
@property (nonatomic, readonly, copy) HDHRSOriginalSignedClinicalDataRecord *originalRecord;
@property (nonatomic, readonly, copy) NSData *uniquenessChecksum;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithOriginalRecord:(id)arg1 mainRecord:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalRecord:(id)arg1 mainRecord:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mainRecord;
- (id)originalRecord;
- (id)uniquenessChecksum;

@end
