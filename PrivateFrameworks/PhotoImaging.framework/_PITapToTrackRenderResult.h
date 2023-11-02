
@interface _PITapToTrackRenderResult : _NURenderResult <PITapToTrackResult> {
    PTCinematographyTrack * _completedTrack;
}

@property (nonatomic, readonly) PTCinematographyTrack *completedTrack;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)completedTrack;
- (id)initWithCompletedTrack:(id)arg1;

@end
