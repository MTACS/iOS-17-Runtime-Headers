
@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware> {
    NSArray * _invalidationObservers;
    MPCPlaybackEngine * _playbackEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCPlaybackEngine *playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)invalidationObservers;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)playbackEngine;
- (id)playerVideoView:(id)arg1 chain:(id)arg2;
- (void)setInvalidationObservers:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (id)videoOutput:(id)arg1 chain:(id)arg2;

@end
