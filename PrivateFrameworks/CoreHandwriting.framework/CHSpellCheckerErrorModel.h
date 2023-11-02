
@interface CHSpellCheckerErrorModel : PRErrorModel

- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;
- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;

@end
