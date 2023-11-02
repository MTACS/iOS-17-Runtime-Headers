
@protocol CLKFullColorImageView <CLKMonochromeComplicationView>

@required

- (void)configureWithImageProvider:(CLKFullColorImageProvider *)arg1 reason:(long long)arg2;
- (id)initFullColorImageViewWithDevice:(CLKDevice *)arg1;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;

@optional

- (UIFontDescriptor *)fontDescriptor;
- (double)fontSizeFactor;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(NSObject<OS_dispatch_group> *)arg2;
- (void)setFontDescriptor:(UIFontDescriptor *)arg1;
- (void)setFontSizeFactor:(double)arg1;

@end
