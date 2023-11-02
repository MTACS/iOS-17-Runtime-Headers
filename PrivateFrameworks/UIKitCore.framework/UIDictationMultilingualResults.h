
@interface UIDictationMultilingualResults : NSObject {
    NSString * _dominantLanguage;
    NSArray * _phrases;
}

@property (nonatomic, copy) NSString *dominantLanguage;
@property (nonatomic, copy) NSArray *phrases;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dominantLanguage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)phrases;
- (void)setDominantLanguage:(id)arg1;
- (void)setPhrases:(id)arg1;

@end
