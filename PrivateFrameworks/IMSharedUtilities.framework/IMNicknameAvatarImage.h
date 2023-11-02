
@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding> {
    bool  _contentIsSensitive;
    NSString * _imageFilePath;
    NSString * _imageName;
}

@property (nonatomic, readonly) bool contentIsSensitive;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool imageExists;
@property (nonatomic, readonly, copy) NSString *imageFilePath;
@property (nonatomic, readonly, copy) NSString *imageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_writeImageData:(id)arg1 path:(id)arg2 error:(id*)arg3;
- (bool)contentIsSensitive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImage;
- (id)imageData;
- (bool)imageExists;
- (id)imageFilePath;
- (id)imageName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithImageName:(id)arg1 imageData:(id)arg2 imageFilePath:(id)arg3 contentIsSensitive:(bool)arg4;
- (id)initWithImageName:(id)arg1 imageData:(id)arg2 imageFilePath:(id)arg3 contentIsSensitive:(bool)arg4 error:(id*)arg5;
- (id)initWithImageName:(id)arg1 imageFilePath:(id)arg2 contentIsSensitive:(bool)arg3;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)arg1;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)arg1 imageData:(id)arg2 imageFilePath:(id)arg3 contentIsSensitive:(bool)arg4 error:(id*)arg5;
- (id)loadAndReturnImageData;
- (id)publicDictionaryMetadataRepresentation;
- (id)publicDictionaryRepresentation;

@end
