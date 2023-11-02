
@protocol _SFPBImage <NSObject>

@required

- (NSString *)accessibilityLabel;
- (_SFPBAppIconImage *)appIconImage;
- (_SFPBImage *)badgingImage;
- (_SFPBCalendarImage *)calendarImage;
- (_SFPBClockImage *)clockImage;
- (_SFPBContactImage *)contactImage;
- (NSString *)contentType;
- (_SFPBGraphicalFloat *)cornerRadius;
- (int)cornerRoundingStyle;
- (NSString *)identifier;
- (NSData *)imageData;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isTemplate;
- (NSData *)jsonData;
- (NSString *)keyColor;
- (_SFPBLocalImage *)localImage;
- (_SFPBMediaArtworkImage *)mediaArtworkImage;
- (_SFPBMonogramImage *)monogramImage;
- (_SFPBPhotosLibraryImage *)photosLibraryImage;
- (_SFPBQuickLookThumbnailImage *)quickLookThumbnailImage;
- (_SFPBGraphicalFloat *)scale;
- (void)setAccessibilityLabel:(NSString *)arg1;
- (void)setAppIconImage:(_SFPBAppIconImage *)arg1;
- (void)setBadgingImage:(_SFPBImage *)arg1;
- (void)setCalendarImage:(_SFPBCalendarImage *)arg1;
- (void)setClockImage:(_SFPBClockImage *)arg1;
- (void)setContactImage:(_SFPBContactImage *)arg1;
- (void)setContentType:(NSString *)arg1;
- (void)setCornerRadius:(_SFPBGraphicalFloat *)arg1;
- (void)setCornerRoundingStyle:(int)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setImageData:(NSData *)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setKeyColor:(NSString *)arg1;
- (void)setLocalImage:(_SFPBLocalImage *)arg1;
- (void)setMediaArtworkImage:(_SFPBMediaArtworkImage *)arg1;
- (void)setMonogramImage:(_SFPBMonogramImage *)arg1;
- (void)setPhotosLibraryImage:(_SFPBPhotosLibraryImage *)arg1;
- (void)setQuickLookThumbnailImage:(_SFPBQuickLookThumbnailImage *)arg1;
- (void)setScale:(_SFPBGraphicalFloat *)arg1;
- (void)setShouldCropToCircle:(bool)arg1;
- (void)setSize:(_SFPBPointSize *)arg1;
- (void)setSource:(int)arg1;
- (void)setSymbolImage:(_SFPBSymbolImage *)arg1;
- (void)setType:(int)arg1;
- (void)setUrlImage:(_SFPBURLImage *)arg1;
- (bool)shouldCropToCircle;
- (_SFPBPointSize *)size;
- (int)source;
- (_SFPBSymbolImage *)symbolImage;
- (int)type;
- (_SFPBURLImage *)urlImage;

@end
