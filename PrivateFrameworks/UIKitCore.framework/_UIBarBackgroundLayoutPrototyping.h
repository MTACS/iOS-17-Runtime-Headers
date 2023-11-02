
@interface _UIBarBackgroundLayoutPrototyping : _UIBarBackgroundLayout {
    UIColor * _colorWash;
}

+ (bool)prototypingEnabled;
+ (id)prototypingLayoutForBarType:(long long)arg1;
+ (void)registerPrototypingCallback:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)bg1Color;
- (id)bg1Effects;
- (bool)bg1HasShadow;
- (id)bg1ShadowColor;
- (void)describeInto:(id)arg1;
- (bool)shouldUseExplicitGeometry;

@end
