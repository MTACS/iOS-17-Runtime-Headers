
@interface BRKAudioFileReader : NSObject {
    struct OpaqueExtAudioFile { } * _audioFile;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)fileFrameCount;
- (id)initWithPath:(id)arg1;
- (id)path;
- (bool)readData:(short*)arg1 count:(long long*)arg2;

@end
