
@protocol SFResponseWrapperCardSection <SFCardSection>

@required

- (SFCATModel *)catModel;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (SFPatternModel *)pattern_model;
- (NSArray *)pattern_models;
- (void)setCatModel:(SFCATModel *)arg1;
- (void)setPattern_model:(SFPatternModel *)arg1;
- (void)setPattern_models:(NSArray *)arg1;
- (void)setVisualCATOutput:(NSData *)arg1;
- (NSData *)visualCATOutput;

@end
