
@interface PHAssetResource : NSObject <PHCPLAssetResource> {
    NSString * _assetLocalIdentifier;
    NSManagedObjectID * _assetObjectID;
    <PLResourceIdentity> * _backingResourceIdentity;
    unsigned long long  _cplResourceType;
    bool  _current;
    unsigned short  _dataStoreClassID;
    unsigned long long  _fileSize;
    bool  _inCloud;
    PLPhotoLibraryPathManagerIdentifier * _libraryID;
    bool  _locallyAvailable;
    unsigned int  _orientation;
    NSString * _originalFilename;
    PHPhotoLibrary * _photoLibrary;
    long long  _pixelHeight;
    long long  _pixelWidth;
    id /* block */  _privateFileLoader;
    NSURL * _privateFileURL;
    bool  _trashed;
    NSDate * _trashedDate;
    long long  _type;
    NSString * _uniformTypeIdentifier;
}

@property (nonatomic, readonly) long long analysisType;
@property (nonatomic, readonly, copy) NSString *assetLocalIdentifier;
@property (nonatomic, readonly) NSManagedObjectID *assetObjectID;
@property (nonatomic, readonly) <PLResourceIdentity> *backingResourceIdentity;
@property (nonatomic) unsigned long long cplResourceType;
@property (getter=isCurrent, nonatomic, readonly) bool current;
@property (nonatomic, readonly) unsigned short dataStoreClassID;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (getter=isInCloud, nonatomic, readonly) bool inCloud;
@property (nonatomic, readonly) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (getter=isLocallyAvailable, nonatomic, readonly) bool locallyAvailable;
@property (getter=isLocallyAvailable, nonatomic) bool locallyAvailable;
@property (nonatomic) unsigned int orientation;
@property (nonatomic, readonly, copy) NSString *originalFilename;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) long long pixelHeight;
@property (nonatomic, readonly) long long pixelWidth;
@property (nonatomic, readonly, copy) id /* block */ privateFileLoader;
@property (nonatomic, readonly) NSURL *privateFileURL;
@property (nonatomic, retain) NSURL *privateFileURL;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;
@property (nonatomic, readonly) NSDate *trashedDate;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *uniformTypeIdentifier;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_assetResourcesFromPLResources:(id)arg1 includeMetadata:(bool)arg2 mediaMetadataVirtualResources:(id)arg3 asset:(id)arg4 assetHasAdjustments:(bool)arg5 includeDerivatives:(bool)arg6 includeAdjustmentOverflowDataBlob:(bool)arg7;
+ (id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2;
+ (id)assetResourcesForAsset:(id)arg1;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(bool)arg2;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(bool)arg2 includeMetadata:(bool)arg3;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(bool)arg2 includeMetadata:(bool)arg3 includeAdjustmentOverflowDataBlob:(bool)arg4;
+ (id)assetResourcesForLivePhoto:(id)arg1;

- (void).cxx_destruct;
- (long long)analysisType;
- (id)assetLocalIdentifier;
- (id)assetObjectID;
- (id)backingResourceIdentity;
- (unsigned long long)cplResourceType;
- (unsigned short)dataStoreClassID;
- (id)debugDescription;
- (id)description;
- (unsigned long long)fileSize;
- (id)initWithResource:(id)arg1 asset:(id)arg2 hasAdjustments:(bool)arg3;
- (id)initWithType:(long long)arg1 livePhoto:(id)arg2;
- (bool)isCurrent;
- (bool)isInCloud;
- (bool)isLocallyAvailable;
- (bool)isTrashed;
- (id)libraryID;
- (unsigned int)orientation;
- (id)originalFilename;
- (id)photoLibrary;
- (long long)pixelHeight;
- (long long)pixelWidth;
- (id /* block */)privateFileLoader;
- (id)privateFileURL;
- (void)setCplResourceType:(unsigned long long)arg1;
- (void)setLocallyAvailable:(bool)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setPrivateFileURL:(id)arg1;
- (id)trashedDate;
- (long long)type;
- (id)uniformTypeIdentifier;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)vcp_allAcceptableResourcesForAsset:(id)arg1;
+ (id)vcp_allResourcesForAsset:(id)arg1;
+ (id)vcp_allowedBundlesForSyndicationLibrary;
+ (id /* block */)vcp_ascendingSizeComparator;
+ (id /* block */)vcp_descendingSizeComparator;

- (id)vcp_avAsset;
- (unsigned long long)vcp_fileSize;
- (bool)vcp_hasExtremeAbnormalDimensionForScene;
- (bool)vcp_isDecodable;
- (bool)vcp_isLocallyAvailable;
- (bool)vcp_isMovie;
- (bool)vcp_isPhoto;
- (bool)vcp_isPhotoResourceUsable:(bool)arg1;
- (bool)vcp_isVideoResourceUsable:(bool)arg1;
- (struct CGSize { double x1; double x2; })vcp_size;
- (id)vcp_uniformTypeIdentifier;

@end
