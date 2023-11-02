
@interface CSSiriAudioFileWriter : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _asbd;
    struct OpaqueExtAudioFile { } * _audioFile;
    NSFileHandle * _fileHandle;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _type;
    NSError * _underlyingError;
    NSURL * _url;
}

+ (id)_generateTemporaryFileURL;
+ (id)_savedAudioFilesDirectory;

- (void).cxx_destruct;
- (void)_close;
- (void)_delete;
- (id)_initWithType:(long long)arg1 pathGenerator:(id /* block */)arg2 xorFileHandle:(id)arg3 priority:(unsigned int)arg4;
- (void)appendAudioData:(id)arg1;
- (void)cancel;
- (void)configureWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)dealloc;
- (void)flushWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithType:(long long)arg1 fileHandle:(id)arg2 priority:(unsigned int)arg3;
- (id)initWithType:(long long)arg1 pathGenerator:(id /* block */)arg2 priority:(unsigned int)arg3;

@end
