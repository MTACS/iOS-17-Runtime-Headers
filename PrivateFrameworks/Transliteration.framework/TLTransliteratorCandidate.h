
@interface TLTransliteratorCandidate : NSObject <NSCopying> {
    NSString * _inputWord;
    bool  _isExtensionCandidate;
    double  _lmScore;
    double  _seq2seqScore;
    double  _totalScore;
    NSString * _transliteratedWord;
    long long  _type;
}

@property (readonly, copy) NSString *inputWord;
@property (readonly) bool isExtensionCandidate;
@property (readonly) double lmScore;
@property (readonly) double seq2seqScore;
@property (readonly) double totalScore;
@property (readonly, copy) NSString *transliteratedWord;
@property (readonly) long long type;

+ (id)createWithCompositeTransliteratorCandidate:(const void*)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInputWord:(id)arg1 transliteratedWord:(id)arg2 lmScore:(double)arg3 seq2seqScore:(double)arg4 totalScore:(double)arg5 isExtensionCandidate:(bool)arg6 type:(long long)arg7;
- (id)inputWord;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (double)lmScore;
- (double)seq2seqScore;
- (double)totalScore;
- (id)transliteratedWord;
- (long long)type;

@end
