
@interface _UITraitBasedAppearance : _UIAppearance {
    UITraitCollection * _traitCollection;
}

+ (id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;
+ (bool)_hasAnyCustomizations;
+ (bool)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3;
+ (void)_setHasAnyCustomizations;

- (void)_invalidateAppearanceInWindow:(id)arg1;
- (bool)_isValidAppearanceForCustomizableObject:(id)arg1;
- (id)_traitCollection;
- (void)dealloc;

@end
