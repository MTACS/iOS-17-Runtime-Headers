
@interface ICAttachmentPreviewImage : ICCloudSyncingObject <ICAttachmentPreviewImageUI> {
    NSObject<OS_dispatch_queue> * _fileQueue;
    ICAssetGenerationManager * _generationManager;
    unsigned long long  _imageID;
    ICAccount * placeholderAccount;
    bool  suppressesFileDeletion;
}

@property (nonatomic) short appearanceType;
@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) NSData *cryptoMetadataInitializationVector;
@property (nonatomic, retain) NSData *cryptoMetadataTag;
@property (nonatomic, readonly) <ICAttachmentPreviewImageCryptoStrategy> *cryptoStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *encryptedMetadata;
@property (readonly) NSObject<OS_dispatch_queue> *fileQueue;
@property (nonatomic, copy) NSString *generation;
@property (nonatomic, readonly) ICAssetGenerationManager *generationManager;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) unsigned long long imageID;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSDate *modifiedDate;
@property (nonatomic, readonly) UIImage *orientedImage;
@property (nonatomic) ICAccount *placeholderAccount;
@property (nonatomic) double scale;
@property (nonatomic) bool scaleWhenDrawing;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesFileDeletion;
@property (nonatomic) short version;
@property (nonatomic) bool versionOutOfDate;
@property (nonatomic) double width;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)allAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImageIdentifiersForAccount:(id)arg1;
+ (id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2;
+ (id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)concurrentFileLoadLimitSemaphore;
+ (void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1;
+ (void)enumerateAttachmentPreviewImagesInContext:(id)arg1 batchSize:(unsigned long long)arg2 saveAfterBatch:(bool)arg3 usingBlock:(id /* block */)arg4;
+ (id)fileGlobalQueue;
+ (id)fileQueueGroup;
+ (id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4 appearanceType:(unsigned long long)arg5;
+ (id)newAttachmentPreviewImageWithIdentifier:(id)arg1 attachment:(id)arg2;
+ (id)previewImageURLsForIdentifier:(id)arg1 account:(id)arg2;
+ (void)purgeAllAttachmentPreviewImagesInContext:(id)arg1;
+ (void)purgePreviewImageFilesForIdentifiers:(id)arg1 account:(id)arg2;
+ (long long)updateFileWriteCounterBy:(long long)arg1 identifier:(id)arg2;
+ (void)waitUntilAllFileWritesAreFinished;

- (void).cxx_destruct;
- (void)accountWillChangeToAccount:(id)arg1;
- (void)awakeFromFetch;
- (void)clearDecryptedData;
- (id)cloudAccount;
- (id)containerAccount;
- (id)containerDirectoryURL;
- (void)createOrientedPreviewIfNeeded;
- (id)cryptoStrategyProtocol;
- (id)decryptedImageData;
- (void)deleteFromLocalDatabase;
- (id)encryptedPreviewImageFallbackURL;
- (id)encryptedPreviewImageURL;
- (id)fileQueue;
- (id)generationManager;
- (bool)hasAnyPNGPreviewImageFiles;
- (id)ic_loggingValues;
- (unsigned long long)imageID;
- (bool)imageIsValid;
- (bool)imageIsWriting;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)invalidateCache;
- (void)invalidateImage;
- (void)invalidateOrientedImage;
- (bool)makeSurePreviewImageDirectoryExists:(id*)arg1;
- (id)metadata;
- (long long)minimumSupportedNotesVersion;
- (bool)needsInitialFetchFromCloud;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToBeFetchedFromCloud;
- (bool)needsToBePushedToCloud;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientedImageTransform;
- (id)orientedPreviewImageFallbackURLWithoutCreating;
- (id)orientedPreviewImageURL;
- (id)orientedPreviewImageURLWithoutCreating;
- (id)parentEncryptableObject;
- (id)placeholderAccount;
- (void)prepareForDeletion;
- (id)previewImageDirectoryURL;
- (id)previewImageFallbackURL;
- (id)previewImagePathExtension;
- (id)previewImageURL;
- (id)primaryEncryptedData;
- (id)primaryEncryptedDataFromRecord:(id)arg1;
- (void)removeItemAtURL:(id)arg1;
- (bool)setImageData:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4;
- (void)setImageID:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPlaceholderAccount:(id)arg1;
- (void)setPrimaryEncryptedData:(id)arg1;
- (bool)setScaledImageFromImageSrc:(struct CGImageSource { }*)arg1 typeUTI:(struct __CFString { }*)arg2;
- (void)setSuppressesFileDeletion:(bool)arg1;
- (bool)shouldSyncToCloud;
- (struct CGSize { double x1; double x2; })size;
- (void)suppressFileDeletion;
- (bool)suppressesFileDeletion;
- (void)updateFlagToExcludeFromCloudBackup;
- (id)urls;
- (void)willTurnIntoFault;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)imageCache;
+ (id)orientedImage:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;

- (id /* block */)asyncImage:(id /* block */)arg1 aboutToLoadHandler:(id /* block */)arg2;
- (id)cachedImage;
- (id)cachedOrientedImage;
- (void)clearCachedImage;
- (void)clearCachedOrientedImage;
- (bool)hasCachedImage;
- (id)image;
- (id)imageWithBackground:(int)arg1;
- (id)newImageLoaderForUpdatingImageOnCompletion:(bool)arg1;
- (id)newImageLoaderForUpdatingImageOnCompletion:(bool)arg1 asyncDataLoading:(bool)arg2;
- (id)orientedImage;
- (id)orientedImageID;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientedImageTransform;
- (id)orientedImageWithBackground:(int)arg1;
- (long long)previewImageOrientation;
- (void)setCachedImage:(id)arg1;
- (void)setCachedOrientedImage:(id)arg1;
- (void)writeOrientedPreviewToDisk;

@end
