
@interface SRSSPhoneticCheckerResult : NSObject {
    double  _phoneticSimilarity;
    double  _prior;
    double  _score;
    NSString * _text;
}

@property double phoneticSimilarity;
@property double prior;
@property double score;
@property (nonatomic, retain) NSString *text;

- (void).cxx_destruct;
- (id)description;
- (double)phoneticSimilarity;
- (double)prior;
- (double)score;
- (void)setPhoneticSimilarity:(double)arg1;
- (void)setPrior:(double)arg1;
- (void)setScore:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
