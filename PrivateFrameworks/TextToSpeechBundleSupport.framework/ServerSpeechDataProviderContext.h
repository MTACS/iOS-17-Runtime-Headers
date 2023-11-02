
@interface ServerSpeechDataProviderContext : NSObject {
    int  _audioByteCount;
    struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; } * _currentBuffer;
    struct __TTSPlayback { } * _playback;
    ServerSpeechContext * _speechContext;
}

@property (nonatomic) int audioByteCount;
@property (nonatomic) struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*currentBuffer;
@property (nonatomic) struct __TTSPlayback { }*playback;
@property (nonatomic, retain) ServerSpeechContext *speechContext;

- (void).cxx_destruct;
- (int)audioByteCount;
- (struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)currentBuffer;
- (struct __TTSPlayback { }*)playback;
- (void)setAudioByteCount:(int)arg1;
- (void)setCurrentBuffer:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (void)setPlayback:(struct __TTSPlayback { }*)arg1;
- (void)setSpeechContext:(id)arg1;
- (id)speechContext;

@end
