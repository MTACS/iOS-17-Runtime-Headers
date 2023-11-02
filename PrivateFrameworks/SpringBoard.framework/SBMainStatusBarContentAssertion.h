
@interface SBMainStatusBarContentAssertion : BSSimpleAssertion {
    bool  _animated;
    bool  _dateAndTimeVisible;
    double  _duration;
}

@property (nonatomic) bool animated;
@property (nonatomic) bool dateAndTimeVisible;
@property (nonatomic) double duration;

- (bool)animated;
- (bool)dateAndTimeVisible;
- (double)duration;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2;
- (void)setAnimated:(bool)arg1;
- (void)setDateAndTimeVisible:(bool)arg1;
- (void)setDuration:(double)arg1;

@end
