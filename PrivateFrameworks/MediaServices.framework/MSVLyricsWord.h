
@interface MSVLyricsWord : MSVLyricsTextElement {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    MSVLyricsWord * _nextWord;
    MSVLyricsLine * _parentLine;
    MSVLyricsWord * _parentWord;
    NSArray * _subwords;
    long long  _wordIndex;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (nonatomic, retain) MSVLyricsWord *nextWord;
@property (nonatomic) MSVLyricsLine *parentLine;
@property (nonatomic) MSVLyricsWord *parentWord;
@property (nonatomic, retain) NSArray *subwords;
@property (nonatomic) long long wordIndex;

- (void).cxx_destruct;
- (id)agent;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (id)init;
- (id)nextWord;
- (id)parentLine;
- (id)parentWord;
- (void)setCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNextWord:(id)arg1;
- (void)setParentLine:(id)arg1;
- (void)setParentWord:(id)arg1;
- (void)setSubwords:(id)arg1;
- (void)setWordIndex:(long long)arg1;
- (id)subwords;
- (long long)wordIndex;

@end
