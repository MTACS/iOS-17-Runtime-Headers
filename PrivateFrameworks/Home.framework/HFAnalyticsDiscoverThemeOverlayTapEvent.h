
@interface HFAnalyticsDiscoverThemeOverlayTapEvent : HFAnalyticsEvent {
    NSString * _themeType;
}

@property (nonatomic, retain) NSString *themeType;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setThemeType:(id)arg1;
- (id)themeType;

@end
