
@interface FTCinematicTapResponse : NSObject {
    FTCinematicTapRequest * _request;
    FTCinematicTrack * _tappedTrack;
    bool  _wasSuccessful;
}

@property (nonatomic, retain) FTCinematicTapRequest *request;
@property (nonatomic, retain) FTCinematicTrack *tappedTrack;
@property (nonatomic) bool wasSuccessful;

- (void).cxx_destruct;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setTappedTrack:(id)arg1;
- (void)setWasSuccessful:(bool)arg1;
- (id)tappedTrack;
- (bool)wasSuccessful;

@end
