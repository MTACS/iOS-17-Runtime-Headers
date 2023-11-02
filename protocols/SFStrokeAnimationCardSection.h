
@protocol SFStrokeAnimationCardSection <SFCardSection>

@required

- (NSArray *)characters;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSArray *)pronunciations;
- (void)setCharacters:(NSArray *)arg1;
- (void)setPronunciations:(NSArray *)arg1;
- (void)setStrokeAnimationRepresentation:(NSString *)arg1;
- (void)setStrokeNames:(NSArray *)arg1;
- (void)setType:(NSString *)arg1;
- (NSString *)strokeAnimationRepresentation;
- (NSArray *)strokeNames;
- (NSString *)type;

@end
