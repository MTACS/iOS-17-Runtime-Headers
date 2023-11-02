
@interface SGStringPreprocessor : NSObject {
    NSMutableData * _buffer;
}

- (void).cxx_destruct;
- (void)addToEnd:(id)arg1 withValue:(id)arg2;
- (void)addToStart:(id)arg1 withValue:(id)arg2;
- (unsigned short*)bufferPtrWithMinimumLength:(unsigned long long)arg1;
- (id)characterSetFromString:(id)arg1;
- (void)combineDakutenAndHandakuten:(id)arg1;
- (void)decomposeAndRecomposeStringWithCompatibilityMapping:(id)arg1;
- (void)decomposeStringWithCompatibilityMapping:(id)arg1;
- (void)finalizeForWordPieceCaseInsensitive:(id)arg1;
- (void)finalizeForWordPieceCaseSensitive:(id)arg1;
- (id)init;
- (void)lowerCase:(id)arg1;
- (void)mergeAnyConsecutiveCharacters:(id)arg1;
- (void)mergeAnyConsecutiveNonalphabeticCharacters:(id)arg1;
- (void)mergeAnyConsecutiveNonalphabeticCharactersWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)mergeNumbersSeparatedByASCIISpace:(id)arg1;
- (void)mergeTwoOrMoreConsecutiveCharacters:(id)arg1;
- (void)removeCharacters:(id)arg1 withExceptions:(id)arg2 fromString:(id)arg3;
- (void)removeCharacters:(id)arg1 withValue:(id)arg2;
- (void)removeDuplicateWhitespace:(id)arg1;
- (void)removeEmojiModifyingCharacters:(id)arg1;
- (void)removeEmojiModifyingCharactersWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)removeEmojis:(id)arg1;
- (void)removeEmojisWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)removeNonASCII:(id)arg1;
- (void)removeNonBaseCharacters:(id)arg1;
- (void)removeNonBasicMultilingualPlane:(id)arg1;
- (void)removeNonEmojiSymbols:(id)arg1;
- (void)removeNonEmojiSymbolsWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)removePunctuation:(id)arg1;
- (void)removePunctuationWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)removeSpacingModifierLetters:(id)arg1;
- (void)removeSymbols:(id)arg1;
- (void)removeSymbolsWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)replace:(id)arg1 withBuffer:(unsigned short*)arg2 toIndex:(unsigned long long)arg3;
- (void)replaceAllWhitespaceWithSpaces:(id)arg1;
- (void)replaceCharactersWithSpaces:(id)arg1 withValue:(id)arg2;
- (void)replaceContactNamesWithString:(id)arg1 withValue:(id)arg2;
- (void)replaceLinksWithString:(id)arg1 withValue:(id)arg2;
- (void)replaceNumbersWithString:(id)arg1 withValue:(id)arg2;
- (void)separateCharacter:(id)arg1 withValue:(id)arg2;
- (void)separateFrenchElisions:(id)arg1;
- (void)stripCombiningMarks:(id)arg1;
- (void)stripNonBaseCharacters:(id)arg1;
- (void)transformFullwidthToHalfwidth:(id)arg1;
- (void)transformFullwidthToHalfwidthASCII:(id)arg1;
- (void)transformHalfwidthToFullwidthCJK:(id)arg1;
- (void)trimWhitespace:(id)arg1;

@end
