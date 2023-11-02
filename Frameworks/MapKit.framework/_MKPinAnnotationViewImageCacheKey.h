
@interface _MKPinAnnotationViewImageCacheKey : NSObject {
    long long  _idiom;
    unsigned long long  _mapType;
    UIColor * _pinColor;
    long long  _userInterfaceStyle;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithMapType:(unsigned long long)arg1 pinColor:(id)arg2 traits:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
