
@interface STUIStatusBarVisualProvider_Split1284 : STUIStatusBarVisualProvider_FixedSplit <STUIStatusBarVisualProvider_CustomSplit>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)nativeDisplayWidth;
+ (struct CGSize { double x1; double x2; })notchSize;
+ (double)pillCenteringOffset;
+ (double)trailingEdgeInsetLeadingAdjustment;

- (double)bottomLeadingTopOffset;

@end
