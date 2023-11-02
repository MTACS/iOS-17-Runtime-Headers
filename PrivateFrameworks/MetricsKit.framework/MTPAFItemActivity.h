
@interface MTPAFItemActivity : NSObject {
    MTPAFPlaylistItem * _item;
    MTPAFPlaylist * _playlist;
    MTMediaActivityEventHandler * _startEventHandler;
    MTMetricsData * _startMetricsData;
    MTMediaActivityEventHandler * _stopEventHandler;
    MTMetricsData * _stopMetricsData;
}

@property (nonatomic, retain) MTPAFPlaylistItem *item;
@property (nonatomic, retain) MTPAFPlaylist *playlist;
@property (nonatomic, retain) MTMediaActivityEventHandler *startEventHandler;
@property (nonatomic, retain) MTMetricsData *startMetricsData;
@property (nonatomic, retain) MTMediaActivityEventHandler *stopEventHandler;
@property (nonatomic, retain) MTMetricsData *stopMetricsData;

- (void).cxx_destruct;
- (id)item;
- (id)playlist;
- (void)populatePlaylistAndItemData:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setPlaylist:(id)arg1;
- (void)setStartEventHandler:(id)arg1;
- (void)setStartMetricsData:(id)arg1;
- (void)setStopEventHandler:(id)arg1;
- (void)setStopMetricsData:(id)arg1;
- (void)startAtOverallPosition:(unsigned long long)arg1 triggerType:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (id)startEventHandler;
- (id)startMetricsData;
- (void)stopAtOverallPosition:(unsigned long long)arg1 triggerType:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (id)stopEventHandler;
- (id)stopMetricsData;

@end
