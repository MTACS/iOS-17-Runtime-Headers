
@interface AXMActiveSound : NSObject {
    AVAudioPlayerNode * _player;
    AVAudioUnitTimePitch * _timePitch;
}

@property (nonatomic, retain) AVAudioPlayerNode *player;
@property (nonatomic, retain) AVAudioUnitTimePitch *timePitch;

- (void).cxx_destruct;
- (bool)beginPlayback:(id)arg1 withError:(id*)arg2;
- (void)connectToEngine:(id)arg1;
- (void)disconnectFromEngine:(id)arg1;
- (id)init;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)setTimePitch:(id)arg1;
- (id)timePitch;

@end
