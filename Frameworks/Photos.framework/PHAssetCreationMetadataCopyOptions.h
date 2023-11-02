
@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _shouldCopyLocationData;
    bool  _shouldCopySpatialOverCaptureResources;
    bool  _shouldCopyTitleDescriptionAndKeywords;
}

@property (nonatomic) bool shouldCopyLocationData;
@property (nonatomic) bool shouldCopySpatialOverCaptureResources;
@property (nonatomic) bool shouldCopyTitleDescriptionAndKeywords;

+ (id)metadataCopyOptionsForPublishingOriginals;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;
- (id)plRepresentation;
- (void)setShouldCopyLocationData:(bool)arg1;
- (void)setShouldCopySpatialOverCaptureResources:(bool)arg1;
- (void)setShouldCopyTitleDescriptionAndKeywords:(bool)arg1;
- (bool)shouldCopyLocationData;
- (bool)shouldCopySpatialOverCaptureResources;
- (bool)shouldCopyTitleDescriptionAndKeywords;

@end
