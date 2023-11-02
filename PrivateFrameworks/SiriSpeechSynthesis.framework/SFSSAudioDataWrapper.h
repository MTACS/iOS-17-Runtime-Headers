
@interface SFSSAudioDataWrapper : NSObject {
    NSArray * _audioChunks;
    long long  _index;
}

@property (nonatomic) NSArray *audioChunks;
@property (nonatomic) long long index;

- (void).cxx_destruct;
- (id)audioChunks;
- (long long)index;
- (id)initWithAudioChunks:(id)arg1;
- (void)setAudioChunks:(id)arg1;
- (void)setIndex:(long long)arg1;

@end
