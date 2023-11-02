
@interface ICRandomTextGenerator : NSObject {
    unsigned long long  _language;
    ICRandomNumberGenerator * _randomNumberGenerator;
}

@property (nonatomic, readonly) bool isRightToLeftLanguage;
@property (nonatomic) unsigned long long language;
@property (nonatomic, retain) ICRandomNumberGenerator *randomNumberGenerator;

+ (bool)hasSpacesBetweenWordsForLanguage:(unsigned long long)arg1;
+ (id)loadWordsForLanguage:(unsigned long long)arg1;
+ (id)sentencePunctuationForLanguage:(unsigned long long)arg1 endOfParagraph:(bool)arg2;
+ (id)wordsForLanguage:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)generateMinSentences:(unsigned long long)arg1 maxSentences:(unsigned long long)arg2 minWords:(unsigned long long)arg3 maxWords:(unsigned long long)arg4;
- (id)generateMinWords:(unsigned long long)arg1 maxWords:(unsigned long long)arg2;
- (id)generateWords:(unsigned long long)arg1 minLength:(unsigned long long)arg2;
- (id)generateWordsWithMinLength:(unsigned long long)arg1;
- (id)initWithRandomNumberGenerator:(id)arg1;
- (bool)isRightToLeftLanguage;
- (unsigned long long)language;
- (id)lineOfText;
- (id)paragraph;
- (id)randomNumberGenerator;
- (id)sentence;
- (void)setLanguage:(unsigned long long)arg1;
- (void)setRandomNumberGenerator:(id)arg1;
- (id)word;

@end
