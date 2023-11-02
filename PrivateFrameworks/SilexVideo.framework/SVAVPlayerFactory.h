
@interface SVAVPlayerFactory : NSObject <SVAVPlayerFactory> {
    int  _audioMode;
    <SVAVPlayerItemFactory> * _playerItemFactory;
}

@property (nonatomic, readonly) int audioMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVAVPlayerItemFactory> *playerItemFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)audioMode;
- (id)createPlayerWithURL:(id)arg1;
- (id)initWithAudioMode:(int)arg1 playerItemFactory:(id)arg2;
- (id)playerItemFactory;

@end
