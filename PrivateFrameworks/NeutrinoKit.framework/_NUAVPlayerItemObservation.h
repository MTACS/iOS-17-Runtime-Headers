
@interface _NUAVPlayerItemObservation : NSObject {
    AVPlayerItem * _playerItem;
    bool  _registeredKVO;
}

@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic) bool registeredKVO;

- (void).cxx_destruct;
- (id)playerItem;
- (bool)registeredKVO;
- (void)setPlayerItem:(id)arg1;
- (void)setRegisteredKVO:(bool)arg1;

@end
