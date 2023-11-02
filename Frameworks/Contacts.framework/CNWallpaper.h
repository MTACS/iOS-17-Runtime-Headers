
@interface CNWallpaper : NSObject <NSCopying, NSSecureCoding> {
    NSData * _dataRepresentation;
    NSData * _generatedWatchImageData;
    NSData * _imageData;
    CNWallpaperMetadata * _metadata;
    NSData * _posterArchiveData;
}

@property (nonatomic, readonly) NSDictionary *backgroundColorDescription;
@property (nonatomic, retain) NSData *dataRepresentation;
@property (nonatomic, readonly) NSString *extensionBundleID;
@property (nonatomic, readonly) NSDictionary *fontColorDescription;
@property (nonatomic, readonly) NSDictionary *fontDescription;
@property (nonatomic, retain) NSData *generatedWatchImageData;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, copy) CNWallpaperMetadata *metadata;
@property (nonatomic, retain) NSData *posterArchiveData;
@property (getter=isVertical, nonatomic, readonly) bool vertical;
@property (nonatomic, readonly) NSData *visualFingerprintData;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColorDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)dataRepresentationForPersistence;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleID;
- (id)fontColorDescription;
- (id)fontDescription;
- (id)generateSnapshotImageDataForWatch;
- (id)generatedWatchImageData;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDataRepresentationForPersistence:(id)arg1;
- (id)initWithImageData:(id)arg1 posterArchiveData:(id)arg2;
- (id)initWithImageData:(id)arg1 type:(id)arg2;
- (id)initWithPosterArchiveData:(id)arg1;
- (id)initWithPosterArchiveData:(id)arg1 fontDescription:(id)arg2 fontColorDescription:(id)arg3 backgroundColorDescription:(id)arg4 extensionBundleID:(id)arg5 vertical:(bool)arg6 visualFingerprintData:(id)arg7;
- (id)initWithPosterArchiveData:(id)arg1 metadata:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isVertical;
- (id)metadata;
- (id)posterArchiveData;
- (void)setDataRepresentation:(id)arg1;
- (void)setGeneratedWatchImageData:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPosterArchiveData:(id)arg1;
- (id)visualFingerprintData;
- (id)wallpaperIncludingIMWallpaperMetadata:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)backgroundColorDescriptionFromConfiguration:(id)arg1;
+ (id)colorDescriptionFromColor:(id)arg1;
+ (id)colorFromDescription:(id)arg1;
+ (id)fontDescriptionFromFont:(id)arg1;
+ (id)fontFromDescription:(id)arg1;
+ (double)fontWeightFromFont:(id)arg1;
+ (id)log;
+ (id)reducedSizePosterArchiveDataFromData:(id)arg1;
+ (id)wallpaperTypeFromConfiguration:(id)arg1;
+ (id)wallpaperTypeFromExtensionBundleID:(id)arg1;
+ (id)wallpaperWithPosterArchiveData:(id)arg1 metadataFromConfiguration:(id)arg2 visualFingerprint:(id)arg3;

- (id)backgroundColor;
- (id)font;
- (id)fontColor;
- (bool)imageIsFullyTransparent:(struct CGImage { }*)arg1;
- (id)posterAttributes;
- (void)posterSnapshotForSize:(struct CGSize { double x1; double x2; })arg1 topPadding:(double)arg2 contact:(id)arg3 completion:(id /* block */)arg4;
- (id)snapshotDataFromSnapshotImage:(id)arg1 forSize:(struct CGSize { double x1; double x2; })arg2 topPadding:(double)arg3 extensionBundleID:(id)arg4;
- (id)snapshotImageDataForWatch;
- (void)snapshotImageDataForWatchForContact:(id)arg1 completion:(id /* block */)arg2;
- (void)snapshotImageDataForWatchWithCompletion:(id /* block */)arg1;
- (void)snapshotImageDataWithPreferredSize:(struct CGSize { double x1; double x2; })arg1 topPadding:(double)arg2 contact:(id)arg3 completion:(id /* block */)arg4;
- (id)wallpaperType;

@end
