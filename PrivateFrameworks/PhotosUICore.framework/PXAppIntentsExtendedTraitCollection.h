
@interface PXAppIntentsExtendedTraitCollection : PXExtendedTraitCollection {
    double  _displayScale;
    long long  _userInterfaceStyle;
}

@property (nonatomic) double displayScale;
@property (nonatomic) long long userInterfaceStyle;

- (double)displayScale;
- (id)initWithUserInterfaceStyle:(long long)arg1 displayScale:(double)arg2;
- (long long)layoutSizeClass;
- (long long)layoutSizeSubclass;
- (void)registerObservations;
- (void)setDisplayScale:(double)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)unregisterObservations;
- (long long)userInterfaceStyle;

@end
