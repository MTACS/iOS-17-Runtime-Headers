
@interface VCSessionUplinkVideoStreamController : NSObject {
    NSMutableDictionary * _activeVideoStreams;
    NSDictionary * _cachedActiveVideoStreams;
    unsigned int  _captureFrameRate;
    float  _currentFrameTime;
    NSMutableDictionary * _currentStreamSchedule;
    id  _delegate;
    bool  _dynamicVideoPriorityEnabled;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    double  _pendingKeyFrameGenerationStartTime;
    bool  _pendingStreamsUpdated;
    NSMutableDictionary * _pendingVideoStreams;
    struct opaqueRTCReporting { } * _reportingAgent;
    VCIDRScheduler * _schedulerCell;
    VCIDRScheduler * _schedulerWifi;
    bool  _shouldSkipIDRScheduler;
    float  _startTime;
    NSArray * _streamIDsCell;
    NSArray * _streamIDsWifi;
    NSMutableDictionary * _streamInfoMap;
    NSMutableArray * _streamResetIDR;
    NSMutableDictionary * _streamScheduleCell;
    NSMutableDictionary * _streamScheduleWifi;
    NSMutableSet * _streamToPause;
    NSMutableSet * _streamToResume;
    NSMutableArray * _streamsPendingKeyFrameGeneration;
    bool  _streamsUseRTCP;
    NSMutableDictionary * _videoStreams;
}

@property (readonly) NSDictionary *activeVideoStreams;
@property unsigned int captureFrameRate;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) bool dynamicVideoPriorityEnabled;
@property (nonatomic, copy) NSDictionary *pendingVideoStreams;
@property (nonatomic) bool shouldSkipIDRScheduler;
@property (nonatomic, copy) NSArray *streamIDsCell;
@property (nonatomic, copy) NSArray *streamIDsWifi;

- (id)activeVideoStreams;
- (id)anchorStreamIDWithCappedVideoStreamIDs:(id)arg1;
- (unsigned int)captureFrameRate;
- (float)currentFrameTime;
- (void)dealloc;
- (id)delegate;
- (bool)dynamicVideoPriorityEnabled;
- (bool)filterPendingTemporalStreams;
- (void)generateKeyFrameWithStreamID:(id)arg1 firType:(int)arg2;
- (id)getMultiwayConfigForStreamID:(id)arg1;
- (void)handleStreamsPendingKeyFrameGeneration;
- (void)handleStreamsResetIDR;
- (id)initWithVideoStreams:(id)arg1 streamInfos:(id)arg2 reportingAgent:(struct opaqueRTCReporting { }*)arg3 delegate:(id)arg4;
- (void)initilizeStreamInfoMapWithStreamInfos:(id)arg1;
- (void)lock;
- (id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)arg1;
- (bool)pauseStreams;
- (id)pendingVideoStreams;
- (void)printPendingKeyFrameWarningOnThresholdTimeElapsedWithCurrentFrameTime:(float)arg1;
- (void)restart;
- (bool)resumeStreams;
- (id)schedulerStreamWithVideoStream:(id)arg1;
- (void)selectVideoStreamForVideoPriority;
- (void)setCachedActiveVideoStreams:(id)arg1;
- (void)setCaptureFrameRate:(unsigned int)arg1;
- (void)setCurrentFrameTime:(float)arg1;
- (void)setDynamicVideoPriorityEnabled:(bool)arg1;
- (void)setIsLocalOnCellular:(bool)arg1 cappedVideoStreamIDs:(id)arg2;
- (void)setPendingVideoStreams:(id)arg1;
- (void)setPendingVideoStreamsInternal:(id)arg1;
- (void)setShouldSkipIDRScheduler:(bool)arg1;
- (void)setStreamIDsCell:(id)arg1;
- (void)setStreamIDsWifi:(id)arg1;
- (bool)setStreamsUseRTCPWithStreamInfos:(id)arg1;
- (bool)shouldGenerateIDRWithStreamSchedule:(id)arg1;
- (bool)shouldSkipIDRScheduler;
- (id)streamIDsCell;
- (id)streamIDsWifi;
- (void)unlock;
- (id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)arg1 shouldRemoveFromPendingArray:(bool*)arg2;

@end
