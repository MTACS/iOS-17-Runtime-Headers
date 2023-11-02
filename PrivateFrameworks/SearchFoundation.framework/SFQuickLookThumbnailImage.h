
@interface SFQuickLookThumbnailImage : SFImage <NSCopying, NSSecureCoding, SFQuickLookThumbnailImage> {
    NSString * _coreSpotlightIdentifier;
    NSURL * _filePath;
    NSString * _fileProviderIdentifier;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) SFImage *badgingImage;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (nonatomic) double cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSURL *filePath;
@property (nonatomic, copy) NSString *fileProviderIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) bool isTemplate;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyColor;
@property (nonatomic) double scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) int source;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)filePath;
- (id)fileProviderIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setFileProviderIdentifier:(id)arg1;

@end
