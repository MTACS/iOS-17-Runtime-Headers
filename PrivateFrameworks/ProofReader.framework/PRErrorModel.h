
@interface PRErrorModel : NSObject <PRErrorModeling> {
    <PRErrorModeling> * _customErrorModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasCustomReplacementErrorScores;
@property (readonly) bool hasCustomTranspositionErrorScores;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (double)errorScoreForType:(unsigned long long)arg1;
- (bool)hasCustomInsertionErrorScores;
- (bool)hasCustomOmissionErrorScores;
- (bool)hasCustomReplacementErrorScores;
- (bool)hasCustomTranspositionErrorScores;
- (id)initWithCustomErrorModel:(id)arg1;
- (double)insertionErrorScoreForIntendedPrecedingCharacter:(unsigned short)arg1 insertedCharacter:(unsigned short)arg2 intendedFollowingCharacter:(unsigned short)arg3;
- (double)omissionErrorScoreForIntendedPrecedingCharacter:(unsigned short)arg1 omittedCharacter:(unsigned short)arg2 intendedFollowingCharacter:(unsigned short)arg3;
- (double)replacementErrorScoreForIntendedCharacter:(unsigned short)arg1 actualCharacter:(unsigned short)arg2;
- (double)transpositionErrorScoreForIntendedFirstCharacter:(unsigned short)arg1 intendedSecondCharacter:(unsigned short)arg2;

@end
