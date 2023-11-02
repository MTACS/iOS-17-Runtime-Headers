
@interface PHAssetResourceQualityClass : NSObject {
    unsigned long long  _backingCPLResourceType;
    PLImageFormat * _backingImageFormat;
    struct __CFString { } * _colorSpaceName;
    bool  _croppedToSquare;
    unsigned long long  _maxNumberOfPixelsIfSquare;
    unsigned long long  _maxSideLengthIfSquare;
    unsigned long long  _metalPixelFormat;
    bool  _table;
    long long  _thumbnailKind;
    bool  _video;
}

@property (nonatomic) unsigned long long backingCPLResourceType;
@property (nonatomic, retain) PLImageFormat *backingImageFormat;
@property (nonatomic, readonly) struct __CFString { }*colorSpaceName;
@property (getter=isCroppedToSquare, nonatomic, readonly) bool croppedToSquare;
@property (nonatomic, readonly) unsigned long long maxNumberOfPixelsIfSquare;
@property (nonatomic, readonly) unsigned long long maxSideLengthIfSquare;
@property (nonatomic, readonly) unsigned long long metalPixelFormat;
@property (getter=isTable, nonatomic, readonly) bool table;
@property (getter=isThumbnail, nonatomic, readonly) bool thumbnail;
@property (nonatomic, readonly) long long thumbnailKind;
@property (getter=isVideo, nonatomic, readonly) bool video;

+ (id)_cplDerivativeAssetResourceQualityClasses;
+ (id)_thumbnailAssetResourceQualityClassesForCurrentDeviceInLibrary:(id)arg1;
+ (id)allQualityClassesMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)anyQualityClassMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)assetResourceQualityClassesInLibrary:(id)arg1;

- (void).cxx_destruct;
- (long long)_compare:(id)arg1;
- (unsigned long long)backingCPLResourceType;
- (id)backingImageFormat;
- (struct __CFString { }*)colorSpaceName;
- (id)description;
- (id)initWithCPLResourceType:(unsigned long long)arg1;
- (id)initWithThumbnailFormat:(id)arg1;
- (bool)isCroppedToSquare;
- (bool)isTable;
- (bool)isThumbnail;
- (bool)isVideo;
- (unsigned long long)maxNumberOfPixelsIfSquare;
- (unsigned long long)maxSideLengthIfSquare;
- (unsigned long long)metalPixelFormat;
- (void)preheatDataForThumbnailIndexes:(id)arg1 inLibrary:(id)arg2;
- (void)setBackingCPLResourceType:(unsigned long long)arg1;
- (void)setBackingImageFormat:(id)arg1;
- (id)tableThumbnailDataForAsset:(id)arg1 dataSpecification:(struct PHAssetResourceTableDataSpecification { int x1; int x2; int x3; int x4; int x5; int x6; long long x7; }*)arg2;
- (id)tableThumbnailEntriesAtIndexes:(id)arg1 inLibrary:(id)arg2;
- (long long)thumbnailKind;

@end
