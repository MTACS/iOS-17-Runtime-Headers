
@interface PXVideoTrimQueueController : NSObject {
    PLManagedAlbum * _album;
    NSString * _albumName;
    NSString * _commentText;
    NSDictionary * _customExportsInfo;
    <PXVideoTrimQueueControllerDelegate> * _delegate;
    struct { 
        unsigned int hasWillTrim : 1; 
        unsigned int hasDidTrim : 1; 
        unsigned int hasDidFinish : 1; 
        unsigned int hasDidCancel : 1; 
    }  _delegateFlags;
    double  _endTime;
    PLPhotoLibrary * _photoLibrary;
    NSArray * _recipients;
    NSMutableArray * _sourcesToTransform;
    double  _startTime;
    NSMutableArray * _trimQueue;
    NSMutableDictionary * _trimmedVideoInfo;
    NSArray * _videosSources;
    NSDictionary * _videosSourcesSharingInfo;
}

@property (nonatomic, readonly) PLManagedAlbum *album;
@property (nonatomic, retain) NSString *albumName;
@property (nonatomic, retain) NSString *commentText;
@property (nonatomic, readonly) NSDictionary *customExportsInfo;
@property (nonatomic) <PXVideoTrimQueueControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, readonly) NSDictionary *trimmedVideoInfo;
@property (nonatomic, readonly) NSArray *videosSources;
@property (nonatomic, readonly) NSDictionary *videosSourcesSharingInfo;

+ (bool)areVideoSourcesStreamShareSources:(id)arg1;
+ (double)durationFromVideoAtURL:(id)arg1;
+ (id)photoLibraryFromSources:(id)arg1 album:(id)arg2;
+ (id)videoInfoKeyForSource:(id)arg1;

- (void).cxx_destruct;
- (void)_dequeueTrimmingControl;
- (void)_dismissViewControllerWithCompletion:(id /* block */)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_sendDidFinish;
- (bool)_shouldShowVideoTooLongAlertForVideoSource:(id)arg1;
- (void)_showTrimViewControllerForSource:(id)arg1;
- (void)_trimVideoSource:(id)arg1;
- (id)_videoTooLongAlertController;
- (id)album;
- (id)albumName;
- (id)alternateSourceToUseIfNeededFromSource:(id)arg1;
- (void)cleanupResources;
- (id)commentText;
- (id)customExportsInfo;
- (id)delegate;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 videoSources:(id)arg2 videoSourcesSharingInfo:(id)arg3 customExportsInfo:(id)arg4 album:(id)arg5;
- (id)recipients;
- (void)setAlbumName:(id)arg1;
- (void)setCommentText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)start;
- (id)trimmedVideoInfo;
- (id)videosSources;
- (id)videosSourcesSharingInfo;

@end
