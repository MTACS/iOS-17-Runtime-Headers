
@interface SearchUIWeatherColorGenerator : SearchUIColorGenerator

@property (nonatomic, retain) SFWeatherColor *sfColor;

- (int)defaultTintStyle;
- (void)generateHexColorsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, const const /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)generateUIColorsIsDark:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
