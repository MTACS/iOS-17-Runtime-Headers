
@interface UIDictationConnectionCorrectionInfo : NSObject {
    int  _alternativeSelectionCount;
    NSDictionary * _alternativesSelectedInfo;
    int  _characterDeletionCount;
    int  _characterInsertionCount;
    int  _characterModificationCount;
    int  _characterSubstitutionCount;
    NSString * _correctedText;
    NSDictionary * _recognizedTextInfo;
    NSDictionary * _userEditedTextInfo;
}

@property (nonatomic) int alternativeSelectionCount;
@property (nonatomic, copy) NSDictionary *alternativesSelectedInfo;
@property (nonatomic) int characterDeletionCount;
@property (nonatomic) int characterInsertionCount;
@property (nonatomic) int characterModificationCount;
@property (nonatomic) int characterSubstitutionCount;
@property (nonatomic, copy) NSString *correctedText;
@property (nonatomic, copy) NSDictionary *recognizedTextInfo;
@property (nonatomic, copy) NSDictionary *userEditedTextInfo;

- (void).cxx_destruct;
- (int)alternativeSelectionCount;
- (id)alternativesSelectedInfo;
- (int)characterDeletionCount;
- (int)characterInsertionCount;
- (int)characterModificationCount;
- (int)characterSubstitutionCount;
- (id)correctedText;
- (id)recognizedTextInfo;
- (void)setAlternativeSelectionCount:(int)arg1;
- (void)setAlternativesSelectedInfo:(id)arg1;
- (void)setCharacterDeletionCount:(int)arg1;
- (void)setCharacterInsertionCount:(int)arg1;
- (void)setCharacterModificationCount:(int)arg1;
- (void)setCharacterSubstitutionCount:(int)arg1;
- (void)setCorrectedText:(id)arg1;
- (void)setRecognizedTextInfo:(id)arg1;
- (void)setUserEditedTextInfo:(id)arg1;
- (id)userEditedTextInfo;

@end
