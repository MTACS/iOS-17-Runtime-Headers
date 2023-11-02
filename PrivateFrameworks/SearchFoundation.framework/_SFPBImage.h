
@interface _SFPBImage : PBCodable <NSSecureCoding, _SFPBImage> {
    NSString * _accessibilityLabel;
    _SFPBAppIconImage * _appIconImage;
    _SFPBImage * _badgingImage;
    _SFPBCalendarImage * _calendarImage;
    _SFPBClockImage * _clockImage;
    _SFPBContactImage * _contactImage;
    NSString * _contentType;
    _SFPBGraphicalFloat * _cornerRadius;
    int  _cornerRoundingStyle;
    NSString * _identifier;
    NSData * _imageData;
    bool  _isTemplate;
    NSString * _keyColor;
    _SFPBLocalImage * _localImage;
    _SFPBMediaArtworkImage * _mediaArtworkImage;
    _SFPBMonogramImage * _monogramImage;
    _SFPBPhotosLibraryImage * _photosLibraryImage;
    _SFPBQuickLookThumbnailImage * _quickLookThumbnailImage;
    _SFPBGraphicalFloat * _scale;
    bool  _shouldCropToCircle;
    _SFPBPointSize * _size;
    int  _source;
    _SFPBSymbolImage * _symbolImage;
    int  _type;
    _SFPBURLImage * _urlImage;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) _SFPBAppIconImage *appIconImage;
@property (nonatomic, retain) _SFPBImage *badgingImage;
@property (nonatomic, retain) _SFPBCalendarImage *calendarImage;
@property (nonatomic, retain) _SFPBClockImage *clockImage;
@property (nonatomic, retain) _SFPBContactImage *contactImage;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, retain) _SFPBGraphicalFloat *cornerRadius;
@property (nonatomic) int cornerRoundingStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) bool isTemplate;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyColor;
@property (nonatomic, retain) _SFPBLocalImage *localImage;
@property (nonatomic, retain) _SFPBMediaArtworkImage *mediaArtworkImage;
@property (nonatomic, retain) _SFPBMonogramImage *monogramImage;
@property (nonatomic, retain) _SFPBPhotosLibraryImage *photosLibraryImage;
@property (nonatomic, retain) _SFPBQuickLookThumbnailImage *quickLookThumbnailImage;
@property (nonatomic, retain) _SFPBGraphicalFloat *scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic, retain) _SFPBPointSize *size;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBSymbolImage *symbolImage;
@property (nonatomic) int type;
@property (nonatomic, retain) _SFPBURLImage *urlImage;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)appIconImage;
- (id)badgingImage;
- (id)calendarImage;
- (id)clockImage;
- (id)contactImage;
- (id)contentType;
- (id)cornerRadius;
- (int)cornerRoundingStyle;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageData;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTemplate;
- (id)jsonData;
- (id)keyColor;
- (id)localImage;
- (id)mediaArtworkImage;
- (id)monogramImage;
- (id)photosLibraryImage;
- (id)quickLookThumbnailImage;
- (bool)readFrom:(id)arg1;
- (id)scale;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAppIconImage:(id)arg1;
- (void)setBadgingImage:(id)arg1;
- (void)setCalendarImage:(id)arg1;
- (void)setClockImage:(id)arg1;
- (void)setContactImage:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setCornerRadius:(id)arg1;
- (void)setCornerRoundingStyle:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setKeyColor:(id)arg1;
- (void)setLocalImage:(id)arg1;
- (void)setMediaArtworkImage:(id)arg1;
- (void)setMonogramImage:(id)arg1;
- (void)setPhotosLibraryImage:(id)arg1;
- (void)setQuickLookThumbnailImage:(id)arg1;
- (void)setScale:(id)arg1;
- (void)setShouldCropToCircle:(bool)arg1;
- (void)setSize:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setSymbolImage:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrlImage:(id)arg1;
- (bool)shouldCropToCircle;
- (id)size;
- (int)source;
- (id)symbolImage;
- (int)type;
- (id)urlImage;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

+ (id)imageWithData:(id)arg1;

@end
