
@interface PKShareablePassMetadataPreview : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizedDescription;
    NSString * _ownerDisplayName;
    PKImage * _pkPassThumbnailImage;
    NSString * _provisioningTemplateIdentifier;
    NSURL * _thumbnailURL;
}

@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic, retain) NSString *ownerDisplayName;
@property (nonatomic) struct CGImage { }*passThumbnailImage;
@property (nonatomic, retain) PKImage *pkPassThumbnailImage;
@property (nonatomic, retain) NSString *provisioningTemplateIdentifier;
@property (nonatomic, retain) NSURL *thumbnailURL;

+ (id)new;
+ (id)previewWithPassThumbnail:(struct CGImage { }*)arg1 localizedDescription:(id)arg2;
+ (id)previewWithTemplateIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithPassThumbnail:(struct CGImage { }*)arg1 localizedDescription:(id)arg2 provisioningTemplateIdentifier:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassThumbnail:(struct CGImage { }*)arg1 localizedDescription:(id)arg2;
- (id)initWithTemplateIdentifier:(id)arg1;
- (id)localizedDescription;
- (id)ownerDisplayName;
- (struct CGImage { }*)passThumbnailImage;
- (id)pkPassThumbnailImage;
- (id)provisioningTemplateIdentifier;
- (void)setLocalizedDescription:(id)arg1;
- (void)setOwnerDisplayName:(id)arg1;
- (void)setPassThumbnailImage:(struct CGImage { }*)arg1;
- (void)setPkPassThumbnailImage:(id)arg1;
- (void)setProvisioningTemplateIdentifier:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (id)thumbnailURL;

@end
