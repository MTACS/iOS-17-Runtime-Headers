
@interface VCCaptionTaskInfo : NSObject {
    SFSpeechRecognitionTask * _task;
    long long  _token;
    unsigned int  _updateNumber;
    unsigned int  _utteranceNumber;
}

@property SFSpeechRecognitionTask *task;
@property long long token;
@property unsigned int updateNumber;
@property unsigned int utteranceNumber;

- (id)initWithTask:(id)arg1 token:(long long)arg2 utteranceNumber:(unsigned int)arg3;
- (void)setTask:(id)arg1;
- (void)setToken:(long long)arg1;
- (void)setUpdateNumber:(unsigned int)arg1;
- (void)setUtteranceNumber:(unsigned int)arg1;
- (id)task;
- (long long)token;
- (unsigned int)updateNumber;
- (unsigned int)utteranceNumber;

@end
