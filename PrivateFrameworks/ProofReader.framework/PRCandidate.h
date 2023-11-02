
@interface PRCandidate : NSObject {
    bool  _blocklisted;
    NSArray * _candidateWords;
    double  _errorScore;
    bool  _hasCustomErrorScore;
    double  _lexiconScore;
    double  _linguisticScore;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
}

@property (getter=isBlocklisted, nonatomic) bool blocklisted;
@property (nonatomic, readonly, copy) NSArray *candidateWords;
@property (getter=hasCustomErrorScore, nonatomic) bool customErrorScore;
@property (nonatomic) double errorScore;
@property (nonatomic) double lexiconScore;
@property (nonatomic) double linguisticScore;
@property (nonatomic, readonly) unsigned long long numberOfWords;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } replacementRange;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly, copy) NSString *string;

+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorScore:(double)arg5 capitalizationDictionaryArray:(id)arg6;
+ (id)candidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorType:(unsigned long long)arg5 errorModel:(id)arg6 capitalizationDictionaryArray:(id)arg7;
+ (id)candidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorScore:(double)arg3;
+ (id)candidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorType:(unsigned long long)arg3 errorModel:(id)arg4;
+ (id)candidateWithWords:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorScore:(double)arg3;
+ (id)candidateWithWords:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorType:(unsigned long long)arg3 errorModel:(id)arg4;
+ (id)insertionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 intendedPrecedingCharacter:(unsigned short)arg5 insertedCharacter:(unsigned short)arg6 intendedFollowingCharacter:(unsigned short)arg7 errorModel:(id)arg8 capitalizationDictionaryArray:(id)arg9;
+ (id)insertionCandidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 intendedPrecedingCharacter:(unsigned short)arg3 insertedCharacter:(unsigned short)arg4 intendedFollowingCharacter:(unsigned short)arg5 errorModel:(id)arg6;
+ (id)omissionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 intendedPrecedingCharacter:(unsigned short)arg5 omittedCharacter:(unsigned short)arg6 intendedFollowingCharacter:(unsigned short)arg7 errorModel:(id)arg8 capitalizationDictionaryArray:(id)arg9;
+ (id)omissionCandidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 intendedPrecedingCharacter:(unsigned short)arg3 omittedCharacter:(unsigned short)arg4 intendedFollowingCharacter:(unsigned short)arg5 errorModel:(id)arg6;
+ (id)replacementCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 intendedCharacter:(unsigned short)arg5 actualCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8;
+ (id)replacementCandidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 intendedCharacter:(unsigned short)arg3 actualCharacter:(unsigned short)arg4 errorModel:(id)arg5;
+ (id)transpositionCandidateWithBuffer:(char *)arg1 encoding:(unsigned int)arg2 transform:(unsigned long long)arg3 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 intendedFirstCharacter:(unsigned short)arg5 intendedSecondCharacter:(unsigned short)arg6 errorModel:(id)arg7 capitalizationDictionaryArray:(id)arg8;
+ (id)transpositionCandidateWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 intendedFirstCharacter:(unsigned short)arg3 intendedSecondCharacter:(unsigned short)arg4 errorModel:(id)arg5;

- (id)candidateWords;
- (void)dealloc;
- (id)description;
- (double)errorScore;
- (bool)hasCustomErrorScore;
- (id)initWithCandidateWords:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorScore:(double)arg3;
- (id)initWithString:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 errorScore:(double)arg3;
- (bool)isBlocklisted;
- (double)lexiconScore;
- (double)linguisticScore;
- (unsigned long long)numberOfWords;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })replacementRange;
- (double)score;
- (void)setBlocklisted:(bool)arg1;
- (void)setCustomErrorScore:(bool)arg1;
- (void)setErrorScore:(double)arg1;
- (void)setLexiconScore:(double)arg1;
- (void)setLinguisticScore:(double)arg1;
- (id)string;

@end
