
@interface PKExtendedTraitCollection : NSObject {
    double  _displayScale;
    long long  _layoutSizeClass;
    long long  _layoutSizeSubclass;
    UITraitCollection * _traitCollectionForMapKit;
    long long  _userInterfaceIdiom;
    long long  _userInterfaceStyle;
}

@property (nonatomic) double displayScale;
@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) long long layoutSizeSubclass;
@property (nonatomic, retain) UITraitCollection *traitCollectionForMapKit;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) long long userInterfaceStyle;

- (void).cxx_destruct;
- (id)description;
- (double)displayScale;
- (long long)layoutSizeClass;
- (long long)layoutSizeSubclass;
- (void)setDisplayScale:(double)arg1;
- (void)setLayoutSizeClass:(long long)arg1;
- (void)setLayoutSizeSubclass:(long long)arg1;
- (void)setTraitCollectionForMapKit:(id)arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (id)traitCollectionForMapKit;
- (long long)userInterfaceIdiom;
- (long long)userInterfaceStyle;

@end
