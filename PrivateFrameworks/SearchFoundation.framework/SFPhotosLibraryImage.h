
@interface SFPhotosLibraryImage : SFImage <NSCopying, NSSecureCoding, SFPhotosLibraryImage> {
    NSString * _applicationBundleIdentifier;
    struct { 
        unsigned int isSyndicated : 1; 
    }  _has;
    bool  _isSyndicated;
    NSArray * _peopleInPhoto;
    NSString * _photoIdentifier;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) SFImage *badgingImage;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic) double cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) bool isSyndicated;
@property (nonatomic) bool isTemplate;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyColor;
@property (nonatomic, copy) NSArray *peopleInPhoto;
@property (nonatomic, copy) NSString *photoIdentifier;
@property (nonatomic) double scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) int source;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsSyndicated;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSyndicated;
- (id)jsonData;
- (id)peopleInPhoto;
- (id)photoIdentifier;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setIsSyndicated:(bool)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setPhotoIdentifier:(id)arg1;

@end
