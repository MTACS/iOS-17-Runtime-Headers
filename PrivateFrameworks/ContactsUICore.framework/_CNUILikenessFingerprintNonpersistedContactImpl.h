
@interface _CNUILikenessFingerprintNonpersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl> {
    NSArray * _emailAddresses;
    NSString * _familyName;
    NSString * _givenName;
    NSValue * _imageDataPointer;
    NSString * _middleName;
    NSArray * _phoneNumbers;
    NSValue * _thumbnailImageDataPointer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *emailAddresses;
@property (readonly, copy) NSString *familyName;
@property (readonly, copy) NSString *givenName;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSValue *imageDataPointer;
@property (readonly, copy) NSString *middleName;
@property (readonly, copy) NSArray *phoneNumbers;
@property (readonly) Class superclass;
@property (readonly, copy) NSValue *thumbnailImageDataPointer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddresses;
- (id)familyName;
- (id)givenName;
- (bool)hasContactIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)imageDataPointer;
- (id)init;
- (id)initWithContact:(id)arg1;
- (id)initWithGivenName:(id)arg1 middleName:(id)arg2 familyName:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5 imageData:(id)arg6 thumbnailImageData:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)middleName;
- (id)phoneNumbers;
- (id)thumbnailImageDataPointer;

@end
