
@protocol GKTextStyleReplay <NSObject>

@required

- (GKTextStyle *)baseStyle;
- (void)replayAndApplyStyleWithSystemContentChange:(bool)arg1;
- (void)setBaseStyle:(GKTextStyle *)arg1;

@end
