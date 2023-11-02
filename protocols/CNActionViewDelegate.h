
@protocol CNActionViewDelegate <NSObject>

@required

- (void)didPressActionView:(CNActionView *)arg1 longPress:(bool)arg2;

@optional

- (bool)actionViewShouldPresentDisambiguationUI:(CNActionView *)arg1;

@end
