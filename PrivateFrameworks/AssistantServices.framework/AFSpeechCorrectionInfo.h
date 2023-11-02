
@interface AFSpeechCorrectionInfo : NSObject <NSCopying, NSSecureCoding> {
    long long  _alternativeSelectionCount;
    NSDictionary * _alternativesSelectedInfo;
    long long  _characterDeletionCount;
    long long  _characterInsertionCount;
    long long  _characterModificationCount;
    long long  _characterSubstitutionCount;
    NSString * _correctedText;
    NSDictionary * _recognizedTextInfo;
    NSArray * _selectedAlternativesInfo;
}

@property (nonatomic) long long alternativeSelectionCount;
@property (nonatomic, copy) NSDictionary *alternativesSelectedInfo;
@property (nonatomic) long long characterDeletionCount;
@property (nonatomic) long long characterInsertionCount;
@property (nonatomic) long long characterModificationCount;
@property (nonatomic) long long characterSubstitutionCount;
@property (nonatomic, copy) NSString *correctedText;
@property (nonatomic, copy) NSDictionary *recognizedTextInfo;
@property (nonatomic, copy) NSArray *selectedAlternativesInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)alternativeSelectionCount;
- (id)alternativesSelectedInfo;
- (long long)characterDeletionCount;
- (long long)characterInsertionCount;
- (long long)characterModificationCount;
- (long long)characterSubstitutionCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recognizedTextInfo;
- (id)selectedAlternativesInfo;
- (void)setAlternativeSelectionCount:(long long)arg1;
- (void)setAlternativesSelectedInfo:(id)arg1;
- (void)setCharacterDeletionCount:(long long)arg1;
- (void)setCharacterInsertionCount:(long long)arg1;
- (void)setCharacterModificationCount:(long long)arg1;
- (void)setCharacterSubstitutionCount:(long long)arg1;
- (void)setCorrectedText:(id)arg1;
- (void)setRecognizedTextInfo:(id)arg1;
- (void)setSelectedAlternativesInfo:(id)arg1;

@end
