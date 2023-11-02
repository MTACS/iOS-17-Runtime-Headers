
@interface CNWallpaperMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _backgroundColorDescription;
    NSString * _extensionBundleID;
    NSDictionary * _fontColorDescription;
    NSDictionary * _fontDescription;
    bool  _vertical;
    NSData * _visualFingerprintData;
}

@property (nonatomic, retain) NSDictionary *backgroundColorDescription;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, retain) NSString *extensionBundleID;
@property (nonatomic, retain) NSDictionary *fontColorDescription;
@property (nonatomic, retain) NSDictionary *fontDescription;
@property (getter=isVertical, nonatomic) bool vertical;
@property (nonatomic, retain) NSData *visualFingerprintData;

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColorDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleID;
- (id)fontColorDescription;
- (id)fontDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithFontDescription:(id)arg1 fontColorDescription:(id)arg2 backgroundColorDescription:(id)arg3 extensionBundleID:(id)arg4 vertical:(bool)arg5 visualFingerprintData:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isVertical;
- (void)setBackgroundColorDescription:(id)arg1;
- (void)setExtensionBundleID:(id)arg1;
- (void)setFontColorDescription:(id)arg1;
- (void)setFontDescription:(id)arg1;
- (void)setVertical:(bool)arg1;
- (void)setVisualFingerprintData:(id)arg1;
- (id)visualFingerprintData;

@end
