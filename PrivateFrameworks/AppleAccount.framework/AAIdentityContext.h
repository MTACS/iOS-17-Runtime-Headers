
@interface AAIdentityContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _familyName;
    NSString * _givenName;
    NSUUID * _identityID;
    NSValue * _imageCropRect;
    NSData * _imageData;
    NSData * _memojiMetadata;
    NSString * _middleName;
    NSString * _serviceID;
    NSData * _thumbImageData;
}

@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSUUID *identityID;
@property (nonatomic, copy) NSValue *imageCropRect;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSData *memojiMetadata;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *serviceID;
@property (nonatomic, copy) NSData *thumbImageData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)identityID;
- (id)imageCropRect;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)memojiMetadata;
- (id)middleName;
- (id)serviceID;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setIdentityID:(id)arg1;
- (void)setImageCropRect:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setMemojiMetadata:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setServiceID:(id)arg1;
- (void)setThumbImageData:(id)arg1;
- (id)thumbImageData;

@end
