
@interface SFSpeechLanguageModelConfiguration : NSObject <NSCopying> {
    NSURL * _languageModel;
    NSURL * _vocabulary;
}

@property (nonatomic, readonly, copy) NSURL *languageModel;
@property (nonatomic, readonly, copy) NSURL *vocabulary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLanguageModel:(id)arg1;
- (id)initWithLanguageModel:(id)arg1 vocabulary:(id)arg2;
- (id)languageModel;
- (id)vocabulary;

@end
