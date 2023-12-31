
@interface EKStrikethroughLabel : UILabel {
    bool  _drawsStrikethrough;
    double  _firstLineHeadIndent;
    double  _hyphenationFactor;
}

@property (nonatomic) bool drawsStrikethrough;
@property (nonatomic) double firstLineHeadIndent;
@property (nonatomic) double hyphenationFactor;

- (bool)drawsStrikethrough;
- (double)firstLineHeadIndent;
- (double)hyphenationFactor;
- (void)setDrawsStrikethrough:(bool)arg1;
- (void)setFirstLineHeadIndent:(double)arg1;
- (void)setHyphenationFactor:(double)arg1;
- (void)setText:(id)arg1;

@end
