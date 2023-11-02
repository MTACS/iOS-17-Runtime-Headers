
@interface SKDiskImageResizerBase : NSObject <SKCancellableImageOperation> {
    SKStateMachine * _activeFSM;
    unsigned long long  _cancelPhase;
    SKDisk * _disk;
    SKDiskImage * _image;
    SKDiskImageSizeLimits * _limits;
    NSError * _resizeError;
    SKDiskImageResizeParams * _resizeParams;
}

@property (nonatomic, retain) SKStateMachine *activeFSM;
@property (nonatomic) unsigned long long cancelPhase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SKDisk *disk;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKDiskImage *image;
@property (nonatomic, retain) SKDiskImageSizeLimits *limits;
@property (nonatomic) unsigned long long requestedSize;
@property (nonatomic, retain) NSError *resizeError;
@property (nonatomic, retain) SKDiskImageResizeParams *resizeParams;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeFSM;
- (id)attachForResizeParams;
- (unsigned long long)cancelPhase;
- (id)cancelResize;
- (bool)cancelWithError:(id*)arg1;
- (bool)checkLimitsWithError:(id*)arg1;
- (id)disk;
- (id)eventFromSize;
- (id)fitToSize:(id*)arg1;
- (id)fsResize:(id*)arg1;
- (id)image;
- (id)imageResize:(id*)arg1;
- (id)initWithDiskImage:(id)arg1 limits:(id)arg2 resizeParams:(id)arg3 error:(id*)arg4;
- (id)limits;
- (unsigned long long)requestedSize;
- (id)resizeError;
- (id)resizeParams;
- (id)resizeStateMachine:(id*)arg1;
- (bool)resizeWithError:(id*)arg1;
- (id)rollbackResize:(id*)arg1;
- (void)setActiveFSM:(id)arg1;
- (void)setCancelPhase:(unsigned long long)arg1;
- (void)setDisk:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLimits:(id)arg1;
- (void)setRequestedSize:(unsigned long long)arg1;
- (void)setResizeError:(id)arg1;
- (void)setResizeParams:(id)arg1;

@end
