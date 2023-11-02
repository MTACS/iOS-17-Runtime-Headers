
@interface UIKBRenderFactory_Car : UIKBRenderFactory

@property (nonatomic, readonly) double carScale;

- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3 onKeyplane:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)activeKeyColor;
- (long long)assetIdiom;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (double)carScale;
- (void)customizeLanguageIndicatorTraitsForTraits:(id)arg1;
- (double)defaultKeyFontSize;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)displayContentsForKey:(id)arg1;
- (id)dividerColor;
- (id)enabledKeyColor;
- (id)globalKeyImageName;
- (id)highlightedKeyColor;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;

@end
