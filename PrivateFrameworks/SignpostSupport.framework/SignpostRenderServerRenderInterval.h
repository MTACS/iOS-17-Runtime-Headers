
@interface SignpostRenderServerRenderInterval : SignpostAnimationSubInterval {
    NSNumber * _cachingLayersRerenderCount;
    NSMutableArray * _clientDrawableIntervals;
    unsigned int  _displayID;
    unsigned long long  _displayRefreshIntervalMachContinuousTime;
    NSNumber * _fallbackShaderDrawCount;
    unsigned int  _frameSeed;
    bool  _hasOffScreenPassCount;
    NSMutableArray * _imageQueueSampleEvents;
    unsigned int  _offScreenPassCount;
    int  _renderServerPID;
    unsigned long long  _renderServerTID;
    NSString * _renderSkipReason;
    NSNumber * _synchronousMetalShaderCompileCount;
}

@property (nonatomic, readonly) NSNumber *cachingLayersRerenderCount;
@property (nonatomic, retain) NSMutableArray *clientDrawableIntervals;
@property (nonatomic, readonly) bool didSkipRender;
@property (nonatomic, readonly) unsigned int displayID;
@property (nonatomic, readonly) unsigned long long displayRefreshIntervalMachContinuousTime;
@property (nonatomic, readonly) NSNumber *fallbackShaderDrawCount;
@property (nonatomic, readonly) unsigned int frameSeed;
@property (nonatomic, readonly) bool hasOffScreenPassCount;
@property (nonatomic, retain) NSMutableArray *imageQueueSampleEvents;
@property (nonatomic, readonly) unsigned int offScreenPassCount;
@property (nonatomic, readonly) int renderServerPID;
@property (nonatomic, readonly) unsigned long long renderServerTID;
@property (nonatomic, readonly) NSString *renderSkipReason;
@property (nonatomic, readonly) NSNumber *synchronousMetalShaderCompileCount;

- (void).cxx_destruct;
- (id)cachingLayersRerenderCount;
- (id)clientDrawableIntervals;
- (bool)didSkipRender;
- (unsigned int)displayID;
- (unsigned long long)displayRefreshIntervalMachContinuousTime;
- (id)fallbackShaderDrawCount;
- (unsigned int)frameSeed;
- (bool)hasOffScreenPassCount;
- (id)imageQueueSampleEvents;
- (id)initWithRenderServerRenderInterval:(id)arg1;
- (unsigned int)offScreenPassCount;
- (int)renderServerPID;
- (unsigned long long)renderServerTID;
- (id)renderSkipReason;
- (void)setClientDrawableIntervals:(id)arg1;
- (void)setImageQueueSampleEvents:(id)arg1;
- (id)synchronousMetalShaderCompileCount;

@end
