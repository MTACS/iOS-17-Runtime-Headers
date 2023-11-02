
@interface _CDInteractionRank : NSObject {
    NSSet * _reasons;
    double  _score;
}

@property (retain) NSSet *reasons;
@property double score;

- (void).cxx_destruct;
- (id)reasons;
- (double)score;
- (void)setReasons:(id)arg1;
- (void)setScore:(double)arg1;

@end
