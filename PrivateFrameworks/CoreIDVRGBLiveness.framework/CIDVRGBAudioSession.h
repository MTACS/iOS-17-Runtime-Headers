
@interface CIDVRGBAudioSession : NSObject {
    NSData * _completeSound;
    NSData * _endSound;
    NSData * _failSound;
    CHHapticEngine * _hapticEngine;
    NSData * _lockSound;
    NSString * _originalCategory;
    AVAudioPlayer * _player;
    NSData * _scanSound;
}

+ (id)_loadSound:(id)arg1;

- (void).cxx_destruct;
- (id)_createHapticEngine;
- (id)_createHapticEventWithType:(unsigned long long)arg1 delay:(double)arg2;
- (id)_dataForSound:(unsigned long long)arg1;
- (void)_playHapticEvent:(id)arg1;
- (void)_playHapticEvents:(id)arg1;
- (void)_playHapticForSound:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)playSound:(unsigned long long)arg1 loop:(bool)arg2;
- (void)stop;

@end
