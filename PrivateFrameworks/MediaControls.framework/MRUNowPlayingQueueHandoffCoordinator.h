
@interface MRUNowPlayingQueueHandoffCoordinator : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    <MRUNowPlayingQueueHandoffCoordinatorDelegate> * _delegate;
    bool  _hideArtwork;
    MRNowPlayingPlayerResponse * _response;
    long long  _state;
}

@property (nonatomic) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic) <MRUNowPlayingQueueHandoffCoordinatorDelegate> *delegate;
@property (nonatomic) bool hideArtwork;
@property (nonatomic, retain) MRNowPlayingPlayerResponse *response;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })artworkSize;
- (void)beginTransition;
- (void)completeHandoff;
- (id)delegate;
- (id)description;
- (void)endTransition;
- (bool)hideArtwork;
- (id)response;
- (void)setArtworkSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideArtwork:(bool)arg1;
- (void)setResponse:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setupTransition;
- (long long)state;
- (id)stateDescription:(long long)arg1;

@end
