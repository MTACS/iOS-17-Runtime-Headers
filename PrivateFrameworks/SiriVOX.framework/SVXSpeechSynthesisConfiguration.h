
@interface SVXSpeechSynthesisConfiguration : NSObject <NSCopying> {
    unsigned int  _audioSessionID;
    NSLocale * _locale;
    AFVoiceInfo * _outputVoiceInfo;
}

@property (nonatomic, readonly) unsigned int audioSessionID;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly, copy) AFVoiceInfo *outputVoiceInfo;

+ (id)configurationWithAudioSessionID:(unsigned int)arg1;
+ (id)configurationWithLocale:(id)arg1;
+ (id)configurationWithOutputVoiceInfo:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)audioSessionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLocale:(id)arg1 outputVoiceInfo:(id)arg2 audioSessionID:(unsigned int)arg3;
- (id)locale;
- (id)outputVoiceInfo;

@end
