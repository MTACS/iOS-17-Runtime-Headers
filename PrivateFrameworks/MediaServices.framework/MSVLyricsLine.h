
@interface MSVLyricsLine : MSVLyricsTextElement {
    MSVLyricsWord * _backgroundVocals;
    bool  _hasBackgroundVocal;
    bool  _instrumentalBreak;
    long long  _lineIndex;
    MSVLyricsLine * _nextLine;
    long long  _originalLineIndex;
    MSVLyricsSection * _parentSection;
    NSAttributedString * _primaryVocalText;
    NSString * _translationKey;
    NSArray * _words;
}

@property (nonatomic, retain) MSVLyricsWord *backgroundVocals;
@property (nonatomic) bool hasBackgroundVocal;
@property (getter=isInstrumentalBreak, nonatomic) bool instrumentalBreak;
@property (nonatomic) long long lineIndex;
@property (nonatomic, retain) MSVLyricsLine *nextLine;
@property (nonatomic) long long originalLineIndex;
@property (nonatomic) MSVLyricsSection *parentSection;
@property (nonatomic, copy) NSAttributedString *primaryVocalText;
@property (nonatomic, copy) NSString *translationKey;
@property (nonatomic, retain) NSArray *words;

- (void).cxx_destruct;
- (id)agent;
- (id)backgroundVocals;
- (bool)containsTimeOffset:(double)arg1 withErrorMargin:(double)arg2;
- (id)description;
- (bool)hasBackgroundVocal;
- (id)init;
- (bool)isInstrumentalBreak;
- (long long)lineIndex;
- (id)nextLine;
- (long long)originalLineIndex;
- (id)parentSection;
- (id)primaryVocalText;
- (void)setBackgroundVocals:(id)arg1;
- (void)setHasBackgroundVocal:(bool)arg1;
- (void)setInstrumentalBreak:(bool)arg1;
- (void)setLineIndex:(long long)arg1;
- (void)setNextLine:(id)arg1;
- (void)setOriginalLineIndex:(long long)arg1;
- (void)setParentSection:(id)arg1;
- (void)setPrimaryVocalText:(id)arg1;
- (void)setTranslationKey:(id)arg1;
- (void)setWords:(id)arg1;
- (id)translationKey;
- (id)words;

@end
