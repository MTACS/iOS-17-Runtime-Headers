
@protocol PRComplicationDisplaying <NSObject>

@required

- (void)complicationsDidEndDisplaying;
- (void)complicationsWillDisplay;
- (bool)isComplicationUserInteractionEnabled;
- (void)setComplicationUserInteractionEnabled:(bool)arg1;

@end
