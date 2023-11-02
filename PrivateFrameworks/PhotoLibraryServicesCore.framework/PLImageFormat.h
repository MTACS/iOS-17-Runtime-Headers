
@interface PLImageFormat : NSObject {
    struct __CFString { } * _colorSpaceName;
    double  _dimension;
    unsigned short  _formatID;
    long long  _formatMode;
    bool  _isAlwaysFullScreen;
    bool  _isCropped;
    unsigned long long  _metalPixelFormat;
    NSString * _name;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _thumbnailKind;
    long long  _version;
}

@property (nonatomic, readonly) struct __CFString { }*colorSpaceName;
@property (nonatomic, readonly) double dimension;
@property (nonatomic, readonly) bool dimensionsReferToShortSide;
@property (nonatomic) unsigned short formatID;
@property (nonatomic, readonly) long long formatMode;
@property (nonatomic, readonly) bool isAlwaysFullScreen;
@property (nonatomic, readonly) bool isCropped;
@property (nonatomic, readonly) bool isSquare;
@property (nonatomic, readonly) bool isTable;
@property (nonatomic, readonly) bool isThumbnail;
@property (nonatomic, readonly) unsigned long long metalPixelFormat;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool refersToLatestVersion;
@property (nonatomic, readonly) bool refersToOriginalVersion;
@property (nonatomic, readonly) bool refersToPenultimateVersion;
@property (nonatomic, readonly) bool refersToUnadjustedVersion;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) long long thumbnailKind;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore

+ (id)_syncFormats;
+ (id)formatWithID:(unsigned short)arg1;

- (void).cxx_destruct;
- (bool)_canDegradeToFormat:(id)arg1;
- (bool)_isAcceptableForViewSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(struct CGSize { double x1; double x2; })arg4 demoteFactor:(double)arg5;
- (struct CGSize { double x1; double x2; })_shortSideFormatScaledSizeForSourceSize:(struct CGSize { double x1; double x2; })arg1 capLength:(bool)arg2;
- (Class)_tableClass;
- (struct __CFString { }*)colorSpaceName;
- (long long)compare:(id)arg1;
- (id)createTableWithPath:(id)arg1 readOnly:(bool)arg2 format:(id)arg3;
- (id)description;
- (double)dimension;
- (bool)dimensionsReferToShortSide;
- (unsigned short)formatID;
- (long long)formatMode;
- (unsigned long long)fullSizeDesiredLongSide;
- (unsigned long long)fullSizeMaxLongSide;
- (unsigned long long)fullSizeMinShortSide;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFormatID:(unsigned short)arg1;
- (id)initWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isCropped:(bool)arg3;
- (id)initWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isCropped:(bool)arg3 version:(long long)arg4 isAlwaysFullScreen:(bool)arg5;
- (id)initWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isCropped:(bool)arg3 version:(long long)arg4 isAlwaysFullScreen:(bool)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7;
- (bool)isAlwaysFullScreen;
- (bool)isCropped;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFormat:(id)arg1;
- (bool)isSquare;
- (bool)isTable;
- (bool)isThumbnail;
- (unsigned long long)metalPixelFormat;
- (id)name;
- (bool)refersToLatestVersion;
- (bool)refersToOriginalVersion;
- (bool)refersToPenultimateVersion;
- (bool)refersToUnadjustedVersion;
- (struct CGSize { double x1; double x2; })scaledSizeForSourceSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })scaledSizeForSourceSize:(struct CGSize { double x1; double x2; })arg1 capLength:(bool)arg2;
- (void)setFormatID:(unsigned short)arg1;
- (id)shortDescription;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)tableFormatBytesPerPixel;
- (unsigned long long)tableFormatBytesPerRowForWidth:(int)arg1;
- (long long)thumbnailKind;
- (id)thumbnailSpecification;
- (long long)version;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (long long)contentMode;
- (struct CGSize { double x1; double x2; })sizeWithFallBackSize:(struct CGSize { double x1; double x2; })arg1;

@end
