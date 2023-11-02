
@interface AXMPhotoAssetData : NSObject <NSSecureCoding> {
    bool  _allowNetworkAccess;
    NSDate * _assetCreationDate;
    NSData * _assetImageData;
    NSString * _assetLocalIdentifier;
    unsigned int  _assetOrientation;
    NSURL * _assetURL;
    NSString * _assetUTI;
    NSURL * _photoLibraryURL;
}

@property (nonatomic, readonly) NSString *UTI;
@property (nonatomic) bool allowNetworkAccess;
@property (nonatomic, retain) NSDate *assetCreationDate;
@property (nonatomic, retain) NSData *assetImageData;
@property (nonatomic, retain) NSString *assetLocalIdentifier;
@property (nonatomic) unsigned int assetOrientation;
@property (nonatomic, retain) NSURL *assetURL;
@property (nonatomic, retain) NSString *assetUTI;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, retain) NSURL *photoLibraryURL;
@property (nonatomic, readonly) NSURL *url;

+ (id)_photoAuthorizationMessage:(long long)arg1;
+ (id)phAssetFromLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UTI;
- (bool)allowNetworkAccess;
- (id)assetCreationDate;
- (id)assetImageData;
- (id)assetLocalIdentifier;
- (unsigned int)assetOrientation;
- (id)assetURL;
- (id)assetUTI;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageAssetLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2 allowsNetworkAccess:(bool)arg3 needsImageData:(bool)arg4;
- (id)localIdentifier;
- (unsigned int)orientation;
- (id)photoLibraryURL;
- (void)setAllowNetworkAccess:(bool)arg1;
- (void)setAssetCreationDate:(id)arg1;
- (void)setAssetImageData:(id)arg1;
- (void)setAssetLocalIdentifier:(id)arg1;
- (void)setAssetOrientation:(unsigned int)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setAssetUTI:(id)arg1;
- (void)setPhotoLibraryURL:(id)arg1;
- (void)updateAssetDetails;
- (id)url;

@end
