
@protocol CRLayoutLine <CRTextRegion, CRIdentifiable>

@required

- (void)appendLine:(id <CRLayoutLine>)arg1;
- (double)confidenceScore;
- (unsigned long long)lineWrappingType;
- (NSString *)locale;
- (struct CGSize { double x1; double x2; })rectifiedSize;
- (void)setLineWrappingType:(unsigned long long)arg1;

@end
