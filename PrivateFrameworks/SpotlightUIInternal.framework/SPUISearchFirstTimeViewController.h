
@interface SPUISearchFirstTimeViewController : SearchUIFirstTimeExperienceViewController {
    UIView * _contentView;
    bool  _hasBeenDisplayed;
}

@property (retain) UIView *contentView;
@property bool hasBeenDisplayed;

+ (void)dismissForever;
+ (bool)needsDisplay;
+ (void)updateViewCountToCount:(long long)arg1;
+ (long long)viewCount;

- (void).cxx_destruct;
- (id)contentView;
- (bool)hasBeenDisplayed;
- (double)idealContentHeight;
- (id)initWithDomains:(id)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4;
- (void)setContentView:(id)arg1;
- (void)setHasBeenDisplayed:(bool)arg1;
- (void)updateViewCount;

@end
