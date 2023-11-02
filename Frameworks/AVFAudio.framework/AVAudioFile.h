
@interface AVAudioFile : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) AVAudioFormat *fileFormat;
@property (nonatomic) long long framePosition;
@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) AVAudioFormat *processingFormat;
@property (nonatomic, readonly) unsigned int rc_audioFormat;
@property (nonatomic, readonly) double rc_durationInSeconds;
@property (nonatomic, readonly) double rc_sampleRate;
@property (nonatomic, readonly) NSURL *url;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

- (void)dealloc;
- (id)fileFormat;
- (long long)framePosition;
- (id)initForReading:(id)arg1 commonFormat:(unsigned long long)arg2 interleaved:(bool)arg3 error:(id*)arg4;
- (id)initForReading:(id)arg1 error:(id*)arg2;
- (id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile { }*)arg1 commonFormat:(unsigned long long)arg2 interleaved:(bool)arg3 error:(id*)arg4;
- (id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile { }*)arg1 error:(id*)arg2;
- (id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned long long)arg3 interleaved:(bool)arg4 error:(id*)arg5;
- (id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id*)arg3;
- (long long)length;
- (id)processingFormat;
- (bool)readIntoBuffer:(id)arg1 error:(id*)arg2;
- (bool)readIntoBuffer:(id)arg1 frameCount:(unsigned int)arg2 error:(id*)arg3;
- (void)setFramePosition:(long long)arg1;
- (id)url;
- (bool)writeFromBuffer:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (unsigned int)rc_audioFormat;
- (double)rc_durationInSeconds;
- (double)rc_sampleRate;

@end
