
@protocol VUIScorecardViewDelegate <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginsForRow:(long long)arg1 atIndex:(long long)arg2;
- (double)maximumWidthForScorecardView:(VUIScorecardView *)arg1;
- (long long)numberOfRowsInScorecardView:(VUIScorecardView *)arg1;
- (long long)numberOfScoreValuesForScorecardView:(VUIScorecardView *)arg1 inRow:(long long)arg2;
- (NSString *)scoreValue:(VUIScorecardView *)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (long long)styleForScorecardView:(VUIScorecardView *)arg1;

@optional

- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (UIImage *)backgroundImageForScorecardViewMaterial:(VUIScorecardView *)arg1;

@end
