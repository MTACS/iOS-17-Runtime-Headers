
@interface SPUITapToRadarView : NUIContainerBoxView

+ (id)generateComponentQueryItems;
+ (void)openTapToRadarWithQuery:(id)arg1 sections:(id)arg2 rankingDebugLog:(id)arg3;
+ (bool)shouldDisplayTapToRadar;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)updateImage;

@end
