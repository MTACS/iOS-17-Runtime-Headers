
@interface SignpostRenderAccumulatedState : NSObject {
    NSMutableArray * _clientDrawableIntervals;
    unsigned int  _frameSeed;
    NSMutableArray * _imageQueueSampleEvents;
}

@property (nonatomic, retain) NSMutableArray *clientDrawableIntervals;
@property (nonatomic, readonly) unsigned int frameSeed;
@property (nonatomic, retain) NSMutableArray *imageQueueSampleEvents;

- (void).cxx_destruct;
- (id)clientDrawableIntervals;
- (unsigned int)frameSeed;
- (id)imageQueueSampleEvents;
- (id)initWithFrameSeed:(unsigned int)arg1;
- (void)setClientDrawableIntervals:(id)arg1;
- (void)setImageQueueSampleEvents:(id)arg1;

@end
