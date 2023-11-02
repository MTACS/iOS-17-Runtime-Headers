
@interface PLPhotoDCFFileGroup : PLPhotoDCFObject {
    unsigned int  _addedExtensions;
    NSDate * _date;
    id  _delegate;
    PLPhotoDCFDirectory * _directory;
    NSString * _directoryPath;
    NSMutableSet * _extensions;
    unsigned long long  _hash;
    unsigned int  _hashComputed;
    NSString * _prebakedThumbnailPath;
    NSString * _preferredExtension;
    NSString * _videoFileExtension;
    unsigned int  _writeIsPending;
}

+ (id)allMetadataFileExtensions;

- (void).cxx_destruct;
- (void)addExtension:(id)arg1;
- (void)addExtensionsFromMetadataDirectory;
- (long long)compare:(id)arg1;
- (void)createMetadataDirectoryIfNecessary;
- (id)date;
- (id)delegate;
- (void)deleteFiles;
- (void)deleteObsoleteFiles;
- (id)description;
- (id)directory;
- (id)extensions;
- (void)forceAddExtensionsFromMetadataDirectory;
- (bool)hasObsoleteFiles;
- (bool)hasPrebakedLandscapeScrubberThumbnails;
- (bool)hasPrebakedPortraitScrubberThumbnails;
- (bool)hasPrebakedThumbnail;
- (bool)hasPrebakedWildcatThumbnails;
- (bool)hasThumbnail;
- (bool)hasVideoFile;
- (unsigned long long)hash;
- (id)imageSourceTypeHint;
- (id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (bool)isWritePending;
- (id)lowResolutionFilename;
- (id)pathForContainingDirectory;
- (id)pathForFullSizeImage;
- (id)pathForGroupWithoutExtension;
- (id)pathForLowResolutionFile;
- (id)pathForMetadata;
- (id)pathForMetadataWithGroupName;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForThumbnailFile;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)pathForVideoPreviewFile;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWriteIsPending:(bool)arg1;
- (id)thumbnailFilename;
- (id)videoPreviewFilename;

@end