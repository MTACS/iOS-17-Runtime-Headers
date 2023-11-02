
@interface _PSSharingContactRankerScoredContact : NSObject {
    _CDInteraction * _interaction;
    double  _score;
}

@property (nonatomic, retain) _CDInteraction *interaction;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithScore:(double)arg1 interaction:(id)arg2;
- (id)interaction;
- (double)score;
- (void)setInteraction:(id)arg1;
- (void)setScore:(double)arg1;

@end
