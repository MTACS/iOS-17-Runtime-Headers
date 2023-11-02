
@interface PHASEVolumeCommandForSession : PHASEVolumeCommand {
    unsigned int  _audioSessionToken;
    PHASESessionVolume * _volume;
}

@property (nonatomic, readonly) unsigned int audioSessionToken;
@property (nonatomic, readonly) PHASESessionVolume *volume;

- (void).cxx_destruct;
- (unsigned int)audioSessionToken;
- (id)description;
- (id)initInternalWithSessionToken:(unsigned int)arg1 volume:(id)arg2;
- (id)initWithSessionToken:(unsigned int)arg1;
- (id)initWithSessionToken:(unsigned int)arg1 volume:(id)arg2;
- (id)volume;

@end
