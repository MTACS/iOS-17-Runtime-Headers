
@interface ICAuthorHighlightAnimation : NSObject {
    bool  _aboveExistingHighlights;
    UIColor * _color;
    NSNumber * _duration;
    NSNumber * _fromValue;
    bool  _removedOnCompletion;
    NSNumber * _toValue;
}

@property (getter=isAboveExistingHighlights, nonatomic) bool aboveExistingHighlights;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) NSNumber *fromValue;
@property (getter=isRemovedOnCompletion, nonatomic) bool removedOnCompletion;
@property (nonatomic, copy) NSNumber *toValue;

- (void).cxx_destruct;
- (id)color;
- (id)description;
- (id)duration;
- (id)fromValue;
- (bool)isAboveExistingHighlights;
- (bool)isEqual:(id)arg1;
- (bool)isRemovedOnCompletion;
- (void)setAboveExistingHighlights:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setFromValue:(id)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setToValue:(id)arg1;
- (id)toValue;

@end
