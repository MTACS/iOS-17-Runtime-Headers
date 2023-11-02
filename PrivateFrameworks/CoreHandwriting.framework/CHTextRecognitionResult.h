
@interface CHTextRecognitionResult : CHRecognitionResult {
    NSIndexSet * _inappropriateWordIndexes;
    bool  _isTextReplacement;
    NSIndexSet * _rareWordIndexes;
    NSString * _string;
    NSArray * _wordCombinedScores;
    NSArray * _wordIDs;
    NSArray * _wordLexicalEntries;
    NSArray * _wordPatternEntries;
    NSArray * _wordRanges;
    NSArray * _wordRecognitionScores;
    NSArray * _wordStrokeSets;
}

@property (readonly) NSIndexSet *inappropriateWordIndexes;
@property (readonly) bool isTextReplacement;
@property (readonly) NSIndexSet *rareWordIndexes;
@property (readonly) NSString *string;
@property (readonly) NSArray *wordCombinedScores;
@property (readonly) NSArray *wordIDs;
@property (readonly) NSArray *wordLexicalEntries;
@property (readonly) NSArray *wordPatternEntries;
@property (readonly) NSArray *wordRanges;
@property (readonly) NSArray *wordRecognitionScores;
@property (readonly) NSArray *wordStrokeSets;

- (void).cxx_destruct;
- (id)inappropriateWordIndexes;
- (id)initWithString:(id)arg1 score:(double)arg2 wordRanges:(id)arg3 wordIDs:(id)arg4 wordRecognitionScores:(id)arg5 wordCombinedScores:(id)arg6 wordStrokeSets:(id)arg7 wordLexicalEntries:(id)arg8 wordPatternEntries:(id)arg9 rareWordIndexes:(id)arg10 inappropriateWordIndexes:(id)arg11 isTextReplacement:(bool)arg12;
- (bool)isTextReplacement;
- (id)mecabraCandidate;
- (id)rareWordIndexes;
- (id)string;
- (id)wordCombinedScores;
- (id)wordIDs;
- (id)wordLexicalEntries;
- (id)wordPatternEntries;
- (id)wordRanges;
- (id)wordRecognitionScores;
- (id)wordStrokeSets;

@end
