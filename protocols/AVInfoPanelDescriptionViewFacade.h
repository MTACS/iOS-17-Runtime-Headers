
@protocol AVInfoPanelDescriptionViewFacade <NSObject>

@required

- (UIImage *)posterImage;
- (void)setClosedCaptionBadgeHidden:(bool)arg1;
- (void)setContentMediaRatingText:(NSString *)arg1 image:(UIImage *)arg2;
- (void)setDateText:(NSString *)arg1;
- (void)setDurationText:(NSString *)arg1;
- (void)setGenreText:(NSString *)arg1;
- (void)setPosterImage:(UIImage *)arg1;
- (void)setPosterViewHidden:(bool)arg1;
- (void)setSeasonEpisodeText:(NSString *)arg1;
- (void)setSecondaryTitleText:(NSString *)arg1;
- (void)setSummaryText:(NSString *)arg1;
- (void)setTitleText:(NSString *)arg1;
- (void)setTomatoFreshness:(unsigned long long)arg1 rating:(float)arg2 hidden:(bool)arg3;
- (void)setViewingModeBadge:(long long)arg1;
- (NSString *)summaryText;

@optional

- (NSArray *)actions;
- (void)setActions:(NSArray *)arg1;

@end
