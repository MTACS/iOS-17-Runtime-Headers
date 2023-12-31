
@interface CLKTextProviderCache : NSObject {
    NSMutableDictionary * _cachesByStyle;
}

- (void).cxx_destruct;
- (id)_cacheForStyle:(id)arg1;
- (id)attributedStringAndSize:(struct CGSize { double x1; double x2; }*)arg1 forMaxWidth:(double)arg2 withStyle:(id)arg3 generator:(id /* block */)arg4;
- (id)attributedStringForIndex:(unsigned long long)arg1 withStyle:(id)arg2 generator:(id /* block */)arg3;

@end
