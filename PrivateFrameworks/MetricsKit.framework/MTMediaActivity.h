
@interface MTMediaActivity : NSObject {
    MTPAFKit * _pafKit;
    <MTMediaPlaylistItem> * _playlistItem;
    MTMetricsData * _startMetricsData;
    MTMetricsData * _stopMetricsData;
    long long  _type;
}

@property (nonatomic) MTPAFKit *pafKit;
@property (nonatomic, retain) <MTMediaPlaylistItem> *playlistItem;
@property (nonatomic, retain) MTMetricsData *startMetricsData;
@property (nonatomic, retain) MTMetricsData *stopMetricsData;
@property (nonatomic) long long type;

+ (unsigned long long)startOverallPositionForItem:(id)arg1;

- (void).cxx_destruct;
- (id)eventDataForTransitioningEvents;
- (id)initWithType:(long long)arg1 playlistItem:(id)arg2 pafKit:(id)arg3;
- (bool)isStopped;
- (id)pafKit;
- (id)playlistItem;
- (unsigned long long)positionFromOverallPosition:(unsigned long long)arg1;
- (void)setPafKit:(id)arg1;
- (void)setPlaylistItem:(id)arg1;
- (void)setStartMetricsData:(id)arg1;
- (void)setStopMetricsData:(id)arg1;
- (void)setType:(long long)arg1;
- (id)startEventHandler;
- (id)startMetricsData;
- (void)startedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (id)stopEventHandler;
- (id)stopMetricsData;
- (void)stoppedAtOverallPosition:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (long long)type;

@end
