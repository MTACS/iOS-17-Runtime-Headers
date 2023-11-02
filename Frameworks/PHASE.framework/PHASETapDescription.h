
@interface PHASETapDescription : NSObject {
    unsigned int  _audioSessionToken;
    long long  _binding;
    AVAudioFormat * _format;
    int  _processIdentifier;
    NSString * _sceneIdentifier;
    long long  _streamType;
    long long  _type;
    NSMutableString * _uidString;
}

@property (nonatomic, readonly) unsigned int audioSessionToken;
@property (nonatomic, readonly) long long binding;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) long long streamType;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *uidString;

- (void).cxx_destruct;
- (unsigned int)audioSessionToken;
- (long long)binding;
- (id)format;
- (id)initInternalWithType:(long long)arg1;
- (id)initScreenSharingTapOfType:(long long)arg1;
- (id)initSystemTapOfType:(long long)arg1;
- (id)initWithAudioSessionToken:(unsigned int)arg1 tapType:(long long)arg2;
- (id)initWithProcessIdentifier:(int)arg1 tapType:(long long)arg2;
- (id)initWithSceneIdentifier:(id)arg1 tapType:(long long)arg2;
- (id)initWithStreamType:(long long)arg1 tapType:(long long)arg2;
- (int)processIdentifier;
- (id)sceneIdentifier;
- (long long)streamType;
- (long long)type;
- (id)uidString;

@end
