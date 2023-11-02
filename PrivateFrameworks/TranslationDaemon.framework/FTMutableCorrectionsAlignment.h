
@interface FTMutableCorrectionsAlignment : FTCorrectionsAlignment

@property (nonatomic, copy) NSString *corrected_words;
@property (nonatomic, copy) NSString *original_words;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrected_words;
- (id)init;
- (id)original_words;
- (void)setCorrected_words:(id)arg1;
- (void)setOriginal_words:(id)arg1;

@end
