
@protocol PRErrorModeling <NSObject>

@optional

- (double)insertionErrorScoreForIntendedPrecedingCharacter:(unsigned short)arg1 insertedCharacter:(unsigned short)arg2 intendedFollowingCharacter:(unsigned short)arg3;
- (double)omissionErrorScoreForIntendedPrecedingCharacter:(unsigned short)arg1 omittedCharacter:(unsigned short)arg2 intendedFollowingCharacter:(unsigned short)arg3;
- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;
- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;

@end
