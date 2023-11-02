
@interface SearchUIGradientColorGenerator : SearchUIColorGenerator

@property (nonatomic, retain) SFGradientColor *sfColor;

- (void)generateUIColorsIsDark:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
