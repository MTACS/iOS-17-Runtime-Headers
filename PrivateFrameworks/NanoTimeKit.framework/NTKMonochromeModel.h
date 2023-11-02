
@interface NTKMonochromeModel : NSObject <CLKMonochromeFilterProvider> {
    UIColor * _accentColor;
    UIColor * _backgroundColor;
    CLKDevice * _device;
    UIColor * _nonAccentColor;
}

@property (nonatomic, retain) UIColor *accentColor;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *nonAccentColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accentColor;
- (id)backgroundColor;
- (id)colorForView:(id)arg1 accented:(bool)arg2;
- (id)device;
- (id)filtersForView:(id)arg1 style:(long long)arg2;
- (id)filtersForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (id)initWithDevice:(id)arg1;
- (id)interpolatedColorForView:(id)arg1;
- (id)nonAccentColor;
- (void)setAccentColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setNonAccentColor:(id)arg1;

@end
