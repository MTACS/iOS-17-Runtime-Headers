
@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (nonatomic) int baseWritingDirection;
@property (nonatomic) long long changeableTokenColumnCount;
@property (nonatomic) long long precedingLineBreaks;
@property (nonatomic, copy) NSArray *tokenColumns;

- (void)adjustColumns;
- (void)appendTokenColumns:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)filterCandidatesWithOutOfPattern:(bool)arg1 duplicateTokenIDs:(bool)arg2 keepOutOfLexiconAlternatives:(bool)arg3 keepAlternativeLengths:(bool)arg4 keepSubstrings:(bool)arg5 shouldKeepOriginalSpelling:(bool)arg6;
- (void)offsetAllStrokeIndexesBy:(long long)arg1;
- (void)prependTokenColumns:(id)arg1 prefixTopPath:(id)arg2;
- (void)remapAllStrokeIndexesWithArray:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setChangeableTokenColumnCount:(long long)arg1;
- (void)setPrecedingLineBreaks:(long long)arg1;
- (void)setTokenColumns:(id)arg1;
- (void)setTranscriptionPaths:(id)arg1 scores:(id)arg2;
- (void)trimTokensToTranscriptionPathCount:(long long)arg1;

@end
