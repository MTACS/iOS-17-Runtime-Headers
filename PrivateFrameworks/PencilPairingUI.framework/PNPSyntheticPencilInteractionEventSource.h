
@interface PNPSyntheticPencilInteractionEventSource : NSObject <PNPPencilInteractionEventSource> {
    bool  _cancelled;
    bool  _playing;
    <PNPPencilInteractionEventDestination> * eventDestination;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PNPPencilInteractionEventDestination> *eventDestination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *playlist;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_playEventAtPlayheadPosition:(long long)arg1;
- (long long)_playlistPositionForPosition:(long long)arg1;
- (id)_terminalEventsForPlayhead;
- (id)eventDestination;
- (bool)isPlaying;
- (void)play;
- (id)playlist;
- (void)setEventDestination:(id)arg1;
- (void)stop;

@end
