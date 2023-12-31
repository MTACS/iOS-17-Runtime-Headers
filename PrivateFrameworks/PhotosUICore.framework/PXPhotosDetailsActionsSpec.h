
@interface PXPhotosDetailsActionsSpec : PXFeatureSpec {
    bool  _shouldInsetAllSeparators;
    bool  _shouldShowSeparators;
}

@property (nonatomic, readonly) bool shouldInsetAllSeparators;
@property (nonatomic, readonly) bool shouldShowSeparators;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (bool)shouldInsetAllSeparators;
- (bool)shouldShowSeparators;

@end
