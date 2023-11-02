
@interface QLThumbnailMetadata : NSObject <NSSecureCoding> {
    long long  _baseline;
    int  _inlinePreviewMode;
}

@property long long baseline;
@property int inlinePreviewMode;

+ (bool)supportsSecureCoding;
+ (id)thumbnailMetadataFromPropertiesDictionary:(id)arg1;

- (long long)baseline;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)inlinePreviewMode;
- (id)propertiesDict;
- (void)setBaseline:(long long)arg1;
- (void)setInlinePreviewMode:(int)arg1;

@end
