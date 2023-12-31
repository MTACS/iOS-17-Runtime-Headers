
@protocol NUIArrangementItem <NSObject>

@required

- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;

@end
