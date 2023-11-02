
@interface SFMediaArtworkImage : SFImage <NSCopying, NSSecureCoding, SFMediaArtworkImage> {
    struct { 
        unsigned int mediaEntityType : 1; 
    }  _has;
    int  _mediaEntityType;
    NSString * _persistentID;
    NSString * _spotlightIdentifier;
    NSString * _universalLibraryID;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
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
@property (nonatomic) bool isTemplate;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyColor;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, copy) NSString *persistentID;
@property (nonatomic) double scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) int source;
@property (nonatomic, copy) NSString *spotlightIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *universalLibraryID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMediaEntityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mediaEntityType;
- (id)persistentID;
- (void)setMediaEntityType:(int)arg1;
- (void)setPersistentID:(id)arg1;
- (void)setSpotlightIdentifier:(id)arg1;
- (void)setUniversalLibraryID:(id)arg1;
- (id)spotlightIdentifier;
- (id)universalLibraryID;

@end
