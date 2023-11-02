
@interface NUMutableImageHistogram : NUImageHistogram

+ (Class)_histogramClass;

- (id)_blue;
- (id)_green;
- (id)_luminance;
- (id)_red;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)smoothWithFunction:(long long)arg1 windowSize:(long long)arg2 sampleMode:(long long)arg3;
- (void)write:(id /* block */)arg1;

@end
