
@interface CLSScoreItem : CLSActivityItem {
    double  _maxScore;
    double  _score;
}

@property (nonatomic) double maxScore;
@property (nonatomic) double score;

+ (bool)supportsSecureCoding;

- (id)_init;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 score:(double)arg3 maxScore:(double)arg4;
- (double)maxScore;
- (double)score;
- (void)setMaxScore:(double)arg1;
- (void)setScore:(double)arg1;

@end
