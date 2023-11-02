
@interface SearchUIAppColorGenerator : SearchUIColorGenerator

@property (nonatomic, retain) SFAppColor *sfColor;

- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
