
@interface AVVCAudioBuffer : NSObject {
    void * _impl;
}

@property (readonly) int bytesCapacity;
@property int bytesDataSize;
@property (readonly) int channels;
@property (readonly) void*data;
@property (readonly) int packetDescriptionCapacity;
@property (readonly) int packetDescriptionCount;
@property (readonly) struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*packetDescriptions;
@property (readonly) bool remoteVoiceActivityAvailable;
@property (readonly) unsigned char remoteVoiceActivityRMS;
@property (readonly) unsigned char remoteVoiceActivityVAD;
@property (readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*streamDescription;
@property (nonatomic) unsigned long long timeStamp;
@property (readonly) bool upsamplingSourceAudio;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

- (int)bytesCapacity;
- (int)bytesDataSize;
- (int)channels;
- (void*)data;
- (void)dealloc;
- (void)finalize;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; struct AudioStreamBasicDescription { double x_8_1_1; unsigned int x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; unsigned int x_8_1_6; unsigned int x_8_1_7; unsigned int x_8_1_8; unsigned int x_8_1_9; } x8; bool x9; unsigned char x10; unsigned char x11; bool x12; }*)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3;
- (int)packetDescriptionCapacity;
- (int)packetDescriptionCount;
- (struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)packetDescriptions;
- (bool)remoteVoiceActivityAvailable;
- (unsigned char)remoteVoiceActivityRMS;
- (unsigned char)remoteVoiceActivityVAD;
- (void)setBytesDataSize:(int)arg1;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)arg1 count:(int)arg2;
- (void)setTimeStamp:(unsigned long long)arg1;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)streamDescription;
- (unsigned long long)timeStamp;
- (bool)upsamplingSourceAudio;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)remoteVoiceActivityVADBuffer;

@end
