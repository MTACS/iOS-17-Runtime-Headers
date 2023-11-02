
@interface _UIBarButtonItemDataBaseFallback : NSObject <_UIBarButtonItemDataFallback>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fallback;

- (id)backIndicatorTextStyleForSymbolConfiguration;
- (id)backgroundImageForState:(long long)arg1 style:(long long)arg2;
- (struct UIOffset { double x1; double x2; })backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;
- (id)colorForState:(long long)arg1 style:(long long)arg2;
- (id)fontForState:(long long)arg1 style:(long long)arg2;
- (id)textStyleForSymbolConfiguration;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;

@end
