
@interface PFLivePhotoExportDestination : NSObject {
    NSURL * _photoURL;
    NSURL * _videoURL;
}

@property (readonly) NSURL *photoURL;
@property (readonly) NSURL *videoURL;

+ (id)destinationWithPhotoURL:(id)arg1 videoURL:(id)arg2;

- (void).cxx_destruct;
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2;
- (id)photoURL;
- (id)videoURL;

@end
