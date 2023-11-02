
@interface SearchUICalendarColorGenerator : SearchUIColorGenerator

@property (nonatomic, retain) SFCalendarColor *sfColor;

- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
