
@interface ICAuthorHighlightAnimationAttribute : NSObject <NSCopying> {
    bool  _aboveExistingHighlights;
    UIColor * _color;
    double  _duration;
    double  _fromValue;
    bool  _removedOnCompletion;
    NSDate * _startDate;
    double  _toValue;
}

@property (getter=isAboveExistingHighlights, nonatomic) bool aboveExistingHighlights;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic) double duration;
@property (nonatomic) double fromValue;
@property (getter=isRemovedOnCompletion, nonatomic) bool removedOnCompletion;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) double toValue;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (double)fromValue;
- (unsigned long long)hash;
- (id)initWithStartDate:(id)arg1;
- (bool)isAboveExistingHighlights;
- (bool)isEqual:(id)arg1;
- (bool)isRemovedOnCompletion;
- (void)setAboveExistingHighlights:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFromValue:(double)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setToValue:(double)arg1;
- (id)startDate;
- (double)toValue;

@end
