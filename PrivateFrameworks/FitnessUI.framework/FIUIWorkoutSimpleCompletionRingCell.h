
@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell {
    UIImageView * _iconImageView;
    UIImageView * _ringImageView;
    ARUIRingsView * _ringsView;
    UILabel * _typeLabel;
}

@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UIImageView *ringImageView;
@property (nonatomic, retain) ARUIRingsView *ringsView;
@property (nonatomic, retain) UILabel *typeLabel;

+ (double)preferredHeightForActivityType:(id)arg1 fittingWidth:(double)arg2 plural:(bool)arg3;
+ (double)preferredHeightForLocalizedName:(id)arg1 fittingWidth:(double)arg2;
+ (double)preferredHeightForWorkout:(id)arg1 fittingWidth:(double)arg2;

- (void).cxx_destruct;
- (void)configurePluralViewWithWorkoutActivityType:(id)arg1;
- (void)configureWithWorkout:(id)arg1;
- (id)iconImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)ringImageView;
- (id)ringsView;
- (void)setIconImageView:(id)arg1;
- (void)setRingImageView:(id)arg1;
- (void)setRingsView:(id)arg1;
- (void)setTypeLabel:(id)arg1;
- (id)typeLabel;

@end
