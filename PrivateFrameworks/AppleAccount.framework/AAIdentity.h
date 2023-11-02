
@interface AAIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSString * _familyName;
    NSString * _givenName;
    NSUUID * _identityID;
    NSData * _identityImage;
    NSValue * _identityImageCropRect;
    NSData * _identityImageThumb;
    NSData * _memojiData;
    NSString * _middleName;
    NSString * _serviceID;
}

@property (nonatomic, readonly, copy) NSString *familyName;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (nonatomic, readonly) NSUUID *identityID;
@property (nonatomic, readonly, copy) NSData *identityImage;
@property (nonatomic, readonly, copy) NSValue *identityImageCropRect;
@property (nonatomic, readonly, copy) NSData *identityImageThumb;
@property (nonatomic, readonly, copy) NSData *memojiData;
@property (nonatomic, readonly, copy) NSString *middleName;
@property (nonatomic, readonly, copy) NSString *serviceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)identityID;
- (id)identityImage;
- (id)identityImageCropRect;
- (id)identityImageThumb;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 givenName:(id)arg2 middleName:(id)arg3 familyName:(id)arg4 identityImage:(id)arg5 identityImageThumb:(id)arg6 identityImageCropRect:(id)arg7 memojiData:(id)arg8 serviceID:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)memojiData;
- (id)middleName;
- (id)serviceID;

@end
