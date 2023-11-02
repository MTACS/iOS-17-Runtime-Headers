
@interface _UIScreenComplexBoundingPathUtilities : _UIScreenBoundingPathUtilities {
    _UIBoundingPathBitmap * _bitmap;
    long long  _type;
}

+ (bool)isScreenSupported:(id)arg1;

- (void).cxx_destruct;
- (void)_loadBitmapForScreen:(id)arg1 type:(long long)arg2;
- (id)boundingPathForWindow:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end
