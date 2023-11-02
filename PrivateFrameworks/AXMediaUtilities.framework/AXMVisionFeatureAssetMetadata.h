
@interface AXMVisionFeatureAssetMetadata : NSObject <NSSecureCoding> {
    NSString * _EXIFUserComment;
    NSString * _IPTCCaptionAbstract;
    NSString * _PNGImageDescription;
    NSString * _TIFFImageDescription;
    NSURL * _assetURL;
    NSDate * _creationDate;
    NSString * _imageAssetLocalIdentifier;
    bool  _imageAssetLocallyAvailable;
    NSURL * _imageAssetPhotoLibraryURL;
    NSString * _localizedTypeDescription;
    NSString * _name;
    NSString * _uti;
}

@property (nonatomic, retain) NSString *EXIFUserComment;
@property (nonatomic, retain) NSString *IPTCCaptionAbstract;
@property (nonatomic, retain) NSString *PNGImageDescription;
@property (nonatomic, retain) NSString *TIFFImageDescription;
@property (nonatomic, readonly) bool assetLocallyAvailable;
@property (nonatomic, retain) NSURL *assetURL;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *imageAssetLocalIdentifier;
@property (nonatomic) bool imageAssetLocallyAvailable;
@property (nonatomic, retain) NSURL *imageAssetPhotoLibraryURL;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, retain) NSString *localizedTypeDescription;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSURL *photoLibraryURL;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, retain) NSString *uti;

+ (id)assetMetadataFromURL:(id)arg1;
+ (id)assetMetadataFromURL:(id)arg1 localIdentifier:(id)arg2 photoLibraryURL:(id)arg3;
+ (id)assetMetadataWithLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2 creationDate:(id)arg3 UTI:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EXIFUserComment;
- (id)IPTCCaptionAbstract;
- (id)PNGImageDescription;
- (id)TIFFImageDescription;
- (bool)assetLocallyAvailable;
- (id)assetURL;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageAssetLocalIdentifier;
- (bool)imageAssetLocallyAvailable;
- (id)imageAssetPhotoLibraryURL;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localIdentifier;
- (id)localizedTypeDescription;
- (id)name;
- (id)photoLibraryURL;
- (void)setAssetURL:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setEXIFUserComment:(id)arg1;
- (void)setIPTCCaptionAbstract:(id)arg1;
- (void)setImageAssetLocalIdentifier:(id)arg1;
- (void)setImageAssetLocallyAvailable:(bool)arg1;
- (void)setImageAssetPhotoLibraryURL:(id)arg1;
- (void)setLocalizedTypeDescription:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPNGImageDescription:(id)arg1;
- (void)setTIFFImageDescription:(id)arg1;
- (void)setUti:(id)arg1;
- (id)url;
- (id)uti;

@end
