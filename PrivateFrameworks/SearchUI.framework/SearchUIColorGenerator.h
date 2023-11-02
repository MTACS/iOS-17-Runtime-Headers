
@interface SearchUIColorGenerator : NSObject {
    SFColor * _sfColor;
}

@property (nonatomic, retain) SFColor *sfColor;

- (void).cxx_destruct;
- (int)defaultTintStyle;
- (void)generateUIColorsIsDark:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithSFColor:(id)arg1;
- (void)setSfColor:(id)arg1;
- (id)sfColor;

@end
