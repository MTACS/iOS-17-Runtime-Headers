
@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell {
    double  _currentCompletionFactor;
    UIImageView * _gradientBackgroundImageView;
    UIImageView * _iconImageView;
    ARUIRingsView * _ringsView;
    UILabel * _secondaryLabel;
    FIUIDividerView * _separatorView;
    UILabel * _typeLabel;
    HKWorkout * _workout;
}

@property (nonatomic) double currentCompletionFactor;
@property (nonatomic, retain) UIImageView *gradientBackgroundImageView;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) ARUIRingsView *ringsView;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) FIUIDividerView *separatorView;
@property (nonatomic, retain) UILabel *typeLabel;
@property (nonatomic, retain) HKWorkout *workout;

+ (double)_ringDiameter;
+ (double)_ringToTypeSpacing;
+ (double)_ringTopPadding;
+ (double)_secondaryLabelToSeparatorSpacing;
+ (double)_typeToSecondaryLabelSpacing;
+ (double)rowHeightForWorkout:(id)arg1 width:(double)arg2;

- (void).cxx_destruct;
- (void)animateRingWithCompletion:(id /* block */)arg1;
- (double)currentCompletionFactor;
- (id)gradientBackgroundImageView;
- (id)iconImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ringsViewRenderer:(id)arg3;
- (void)layoutSubviews;
- (id)ringsView;
- (id)secondaryLabel;
- (id)separatorView;
- (void)setCurrentCompletionFactor:(double)arg1;
- (void)setGradientBackgroundImageView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setRingsView:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setTypeLabel:(id)arg1;
- (void)setWorkout:(id)arg1;
- (void)setWorkout:(id)arg1 fillRing:(bool)arg2;
- (void)setWorkoutWithoutFillingRing:(id)arg1;
- (id)typeLabel;
- (id)workout;

@end
