
@protocol CDComplicationDisplay <NSObject>

@required

- (bool)canUseCurvedText;
- (<CDComplicationDisplayObserver> *)displayObserver;
- (void)setCanUseCurvedText:(bool)arg1;
- (void)setDisplayObserver:(id <CDComplicationDisplayObserver>)arg1;

@optional

- (bool)isHighlighted;
- (void)setEditing:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldUseTemplateColors:(bool)arg1;
- (bool)shouldUseTemplateColors;
- (long long)tritiumUpdateMode;

@end
