
@interface WBSPasswordPatternMatcher : NSObject

- (id)_characterRepetitionPatternForPasscode:(id)arg1;
- (id)_commonPasscodeCharacterRepetitionPatterns;
- (id)_commonlySubstitutedCharacterSet;
- (id)_commonlySubstitutedCharactersMap;
- (id)_dateMatchesForPasscode:(id)arg1;
- (unsigned long long)_directionFromHexCoordinate:(id)arg1 to:(id)arg2;
- (void)_enumerateGraphemeClusterSubrangesOfString:(id)arg1 withMinimumLength:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)_keyboardLayoutPatternMatchesForPassword:(id)arg1;
- (id)_keyboardMatchWithPassword:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 shiftedCharacterCount:(unsigned long long)arg3 keyboardIdentifier:(id)arg4 keyboard:(id)arg5;
- (id)_keyboardsByIdentifier;
- (id)_obviousSequenceStartCharacterSet;
- (id)_passwordVariationsWithoutCommonCharacterSubstitutions:(id)arg1;
- (id)_passwordWithoutShiftedCharacters:(id)arg1 shiftMap:(id)arg2 outShiftedCharacterIndexSet:(id*)arg3;
- (id)_patternWithFewestGuessesRequiredWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 patternMatches:(id)arg2;
- (id)_repetitionMatchesForPasscode:(id)arg1;
- (id)_repetitionMatchesForPassword:(id)arg1 withMatches:(id)arg2;
- (id)_sequenceMatchesForPasscode:(id)arg1;
- (id)_sequencePatternMatchWithPassword:(id)arg1 startIndex:(unsigned long long)arg2 endIndex:(unsigned long long)arg3 delta:(long long)arg4;
- (id)_sequencePatternMatchesForPassword:(id)arg1;
- (id)_wordListMatchesForPasscode:(id)arg1 withWordListCollection:(id)arg2;
- (id)_wordListMatchesForPassword:(id)arg1 withWordListCollection:(id)arg2;
- (id)patternMatchesForPasscode:(id)arg1 withWordListCollection:(id)arg2;
- (id)patternMatchesForPassword:(id)arg1 withWordListCollection:(id)arg2;

@end
