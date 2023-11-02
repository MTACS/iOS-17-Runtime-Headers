
@interface HKSignedClinicalDataSource : NSObject <NSCopying, NSSecureCoding> {
    HKSignedClinicalDataQRRepresentation * _QRRepresentation;
    HKSignedClinicalDataFile * _file;
    long long  _type;
}

@property (nonatomic, readonly, copy) HKSignedClinicalDataQRRepresentation *QRRepresentation;
@property (nonatomic, readonly, copy) HKSignedClinicalDataFile *file;
@property (nonatomic, readonly) long long type;

+ (id)sourceWithQRCodeValue:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)QRRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFile:(id)arg1 type:(long long)arg2;
- (id)initWithQRRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
