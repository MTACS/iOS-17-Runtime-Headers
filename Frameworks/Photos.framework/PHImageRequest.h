
@interface PHImageRequest : PHMediaRequest {
    PHImageDecoderAsyncDecodeRequestHandle * _asyncDecodeRequestHandle;
    PHImageRequestBehaviorSpec * _behaviorSpec;
    PHImageResourceChooser * _chooser;
    long long  _configuredExifOrientation;
    NSURL * _configuredImageURL;
    NSString * _configuredImageUTI;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredImageSize;
    PHImageDisplaySpec * _displaySpec;
    bool  _forceIgnoreCache;
    <PHImageRequestDelegate> * _imageDelegate;
    PHImageResult * _imageResult;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_semaphore> * _syncDownloadWaitSemaphore;
}

@property (nonatomic, retain) PHImageRequestBehaviorSpec *behaviorSpec;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } desiredImageSize;
@property (nonatomic, retain) PHImageDisplaySpec *displaySpec;
@property (nonatomic, readonly) <PHImageRequestDelegate> *imageDelegate;

- (void).cxx_destruct;
- (void)_decodeImageConfiguredWithURL:(id)arg1 isPrimaryFormat:(bool)arg2;
- (id)behaviorSpec;
- (void)cancel;
- (void)configureWithURL:(id)arg1 uniformTypeIdentifier:(id)arg2 exifOrientation:(int)arg3;
- (id)description;
- (struct CGSize { double x1; double x2; })desiredImageSize;
- (id)displaySpec;
- (long long)downloadIntent;
- (long long)downloadPriority;
- (void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (id)imageDelegate;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSpec:(id)arg7 chooser:(id)arg8 delegate:(id)arg9;
- (bool)isNetworkAccessAllowed;
- (bool)isSynchronous;
- (void)prepareForRetry;
- (void)setBehaviorSpec:(id)arg1;
- (void)setDisplaySpec:(id)arg1;
- (void)startRequest;

@end
