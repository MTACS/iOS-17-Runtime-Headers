
@interface _REAudioFileAssetReader : NSObject {
    struct AudioFileAssetReader { 
        struct SeekableInputStream {} *seekableStream; 
        bool ownedStream; 
        struct SeekableInputStreamBufferedReader {} *backingData; 
        struct OpaqueAudioFileID {} *audioFile; 
        struct OpaqueExtAudioFile {} *audioFileRef; 
        long long fileLength; 
        AVAudioFormat *format; 
    }  _reader;
}

@property (nonatomic, readonly) struct AudioFileAssetReader { struct SeekableInputStream {} *x1; bool x2; struct SeekableInputStreamBufferedReader {} *x3; struct OpaqueAudioFileID {} *x4; struct OpaqueExtAudioFile {} *x5; long long x6; id x7; }*reader;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getBackingData;
- (id)initWithStream:(struct SeekableInputStream { int (**x1)(); }*)arg1 ownsStream:(bool)arg2;
- (struct AudioFileAssetReader { struct SeekableInputStream {} *x1; bool x2; struct SeekableInputStreamBufferedReader {} *x3; struct OpaqueAudioFileID {} *x4; struct OpaqueExtAudioFile {} *x5; long long x6; id x7; }*)reader;

@end
