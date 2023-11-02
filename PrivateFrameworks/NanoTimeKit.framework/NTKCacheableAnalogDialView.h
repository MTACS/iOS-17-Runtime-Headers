
@interface NTKCacheableAnalogDialView : UIView {
    BSUIMappedImageCache * _cache;
    NSString * _cacheKey;
    double  _dialDiameter;
    NSArray * _moduloGroups;
    NSDictionary * _moduloToGroup;
    UIView * _textContainer;
    NSArray * _textLayers;
    UIView * _tickContainer;
    NSArray * _tickGroups;
}

@property (readonly) double dialDiameter;
@property (readonly) NSArray *tickGroups;

- (void).cxx_destruct;
- (id)_cacheIdentifierForTickCount:(unsigned long long)arg1 modulus:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 rounded:(bool)arg4;
- (void)addTextWithCount:(unsigned long long)arg1 configurationBlock:(id /* block */)arg2;
- (void)addTicksWithCount:(unsigned long long)arg1 moduloGroups:(id)arg2 sizes:(id)arg3 roundedCorners:(id)arg4;
- (void)applyTextColor:(id)arg1;
- (void)applyTickColor:(id)arg1 toGroupIndex:(unsigned long long)arg2;
- (void)applyTickColor:(id)arg1 toModulo:(unsigned long long)arg2;
- (double)dialDiameter;
- (void)enumerateTextLayersWithBlock:(id /* block */)arg1;
- (id)initWithDialDiameter:(double)arg1 device:(id)arg2;
- (id)initWithDialDiameter:(double)arg1 device:(id)arg2 cache:(id)arg3 key:(id)arg4;
- (void)layoutSubviews;
- (id)tickGroups;

@end
