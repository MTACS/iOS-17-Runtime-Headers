
@interface _SFSpeechAnalyzerTranscriberOptions : NSObject {
    unsigned long long  _attributeOptions;
    NSLocale * _locale;
    _SFTranscriberModelOptions * _modelOptions;
    long long  _taskHint;
    unsigned long long  _transcriptionOptions;
}

@property (nonatomic) unsigned long long attributeOptions;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) _SFTranscriberModelOptions *modelOptions;
@property (nonatomic) long long taskHint;
@property (nonatomic) unsigned long long transcriptionOptions;

- (void).cxx_destruct;
- (unsigned long long)attributeOptions;
- (id)init;
- (id)locale;
- (id)modelOptions;
- (void)setAttributeOptions:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setModelOptions:(id)arg1;
- (void)setTaskHint:(long long)arg1;
- (void)setTranscriptionOptions:(unsigned long long)arg1;
- (long long)taskHint;
- (unsigned long long)transcriptionOptions;

@end
