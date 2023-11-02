
@interface AVPlayerItemSampleBufferOutput : AVPlayerItemOutput {
    double  _advanceInterval;
    AVWeakReferencingDelegateStorage * _delegateStorage;
    int  _extractionID;
    struct OpaqueFigPlaybackItem { } * _figPlaybackItem;
    NSObject<OS_dispatch_queue> * _stateQueue;
    int  _trackID;
    AVWeakReference * _weakReference;
    AVWeakReference * _weakReferenceToPlayerItemTrack;
}

@property (readonly) <AVPlayerItemSampleBufferOutputDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;

+ (void)initialize;

- (void)_addFigPlaybackItemListeners;
- (double)_advanceInterval;
- (void)_attachToPlayerItemTrack:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg2;
- (void)_detachFromPlayerItemTrack;
- (int)_extractionID;
- (struct OpaqueFigPlaybackItem { }*)_figPlaybackItem;
- (void)_figPlaybackItemTrackOutputSequenceWasFlushedForTrackID:(int)arg1 extractionID:(int)arg2;
- (void)_figPlaybackItemTrackSampleBufferDidBecomeAvailableForTrackID:(int)arg1 extractionID:(int)arg2;
- (void)_removeFigPlaybackItemListeners;
- (void)_setExtractionID:(int)arg1;
- (void)_setFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_setTrackID:(int)arg1;
- (int)_trackID;
- (id)_weakReference;
- (id)_weakReferenceToPlayerItemTrack;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBufferForTrackID:(int)arg1 flags:(unsigned int*)arg2;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end
