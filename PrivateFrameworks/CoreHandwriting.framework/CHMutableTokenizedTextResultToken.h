
@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken

@property (nonatomic) double alignmentScore;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double combinedScore;
@property (nonatomic) unsigned long long inputSources;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) double recognitionScore;
@property (nonatomic, copy) NSLocale *recognizerSourceLocale;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, copy) NSIndexSet *strokeIndexes;
@property (nonatomic) long long substrokeCount;
@property (nonatomic) unsigned int wordID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAlignmentScore:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCombinedScore:(double)arg1;
- (void)setInputSources:(unsigned long long)arg1;
- (void)setProperties:(unsigned long long)arg1;
- (void)setRecognitionScore:(double)arg1;
- (void)setRecognizerSourceLocale:(id)arg1;
- (void)setString:(id)arg1;
- (void)setStrokeIndexes:(id)arg1;
- (void)setSubstrokeCount:(long long)arg1;
- (void)setWordID:(unsigned int)arg1;

@end
