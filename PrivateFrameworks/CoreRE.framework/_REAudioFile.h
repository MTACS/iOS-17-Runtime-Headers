
@interface _REAudioFile : AVAudioFile {
    _REAudioFileAssetReader * _reader;
}

@property (nonatomic, retain) _REAudioFileAssetReader *reader;

+ (id)audioFileWithStream:(struct SeekableInputStream { int (**x1)(); }*)arg1 ownsStream:(bool)arg2;

- (void).cxx_destruct;
- (id)getBackingData;
- (id)processingFormat;
- (id)reader;
- (void)setReader:(id)arg1;

@end
