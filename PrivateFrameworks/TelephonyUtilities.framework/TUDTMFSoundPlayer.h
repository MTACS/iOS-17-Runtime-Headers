
@interface TUDTMFSoundPlayer : NSObject {
    id /* block */  _playSystemSoundHandler;
}

@property (nonatomic, copy) id /* block */ playSystemSoundHandler;

- (void).cxx_destruct;
- (bool)attemptToPlayKey:(unsigned char)arg1;
- (void)attemptToPlaySoundType:(long long)arg1;
- (id)init;
- (id /* block */)playSystemSoundHandler;
- (void)setPlaySystemSoundHandler:(id /* block */)arg1;

@end
