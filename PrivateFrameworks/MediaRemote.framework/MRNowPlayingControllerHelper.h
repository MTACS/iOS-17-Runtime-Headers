
@interface MRNowPlayingControllerHelper : NSObject <MRNowPlayingControllerDelegate> {
    id /* block */  _clientPropertiesDidChange;
    id /* block */  _contentItemsDidLoadArtwork;
    id /* block */  _contentItemsDidUpdate;
    id /* block */  _didFailWithError;
    id /* block */  _didInvalidate;
    id /* block */  _didLoadResponse;
    id /* block */  _playbackQueueDidChange;
    id /* block */  _playbackRateDidChange;
    id /* block */  _playbackStateDidChange;
    id /* block */  _playerLastPlayingDateDidChange;
    id /* block */  _playerPathDidChange;
    id /* block */  _supportedCommandsDidChange;
}

@property (nonatomic, copy) id /* block */ clientPropertiesDidChange;
@property (nonatomic, copy) id /* block */ contentItemsDidLoadArtwork;
@property (nonatomic, copy) id /* block */ contentItemsDidUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFailWithError;
@property (nonatomic, copy) id /* block */ didInvalidate;
@property (nonatomic, copy) id /* block */ didLoadResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ playbackQueueDidChange;
@property (nonatomic, copy) id /* block */ playbackRateDidChange;
@property (nonatomic, copy) id /* block */ playbackStateDidChange;
@property (nonatomic, copy) id /* block */ playerLastPlayingDateDidChange;
@property (nonatomic, copy) id /* block */ playerPathDidChange;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ supportedCommandsDidChange;

- (void).cxx_destruct;
- (id /* block */)clientPropertiesDidChange;
- (id /* block */)contentItemsDidLoadArtwork;
- (id /* block */)contentItemsDidUpdate;
- (void)controller:(id)arg1 clientPropertiesDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)controller:(id)arg1 contentItemsDidUpdateWithContentItemChanges:(id)arg2;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (void)controller:(id)arg1 didLoadArtworkForContentItems:(id)arg2;
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;
- (void)controller:(id)arg1 playbackQueueDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)controller:(id)arg1 playbackRateDidChangeFrom:(float)arg2 to:(float)arg3;
- (void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)controller:(id)arg1 playerLastPlayingDateDidChange:(id)arg2;
- (void)controller:(id)arg1 playerPathDidChange:(id)arg2;
- (void)controller:(id)arg1 supportedCommandsDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)controllerWillReloadForInvalidation:(id)arg1;
- (id /* block */)didFailWithError;
- (id /* block */)didInvalidate;
- (id /* block */)didLoadResponse;
- (id /* block */)playbackQueueDidChange;
- (id /* block */)playbackRateDidChange;
- (id /* block */)playbackStateDidChange;
- (id /* block */)playerLastPlayingDateDidChange;
- (id /* block */)playerPathDidChange;
- (void)setClientPropertiesDidChange:(id /* block */)arg1;
- (void)setContentItemsDidLoadArtwork:(id /* block */)arg1;
- (void)setContentItemsDidUpdate:(id /* block */)arg1;
- (void)setDidFailWithError:(id /* block */)arg1;
- (void)setDidInvalidate:(id /* block */)arg1;
- (void)setDidLoadResponse:(id /* block */)arg1;
- (void)setPlaybackQueueDidChange:(id /* block */)arg1;
- (void)setPlaybackRateDidChange:(id /* block */)arg1;
- (void)setPlaybackStateDidChange:(id /* block */)arg1;
- (void)setPlayerLastPlayingDateDidChange:(id /* block */)arg1;
- (void)setPlayerPathDidChange:(id /* block */)arg1;
- (void)setSupportedCommandsDidChange:(id /* block */)arg1;
- (id /* block */)supportedCommandsDidChange;

@end
