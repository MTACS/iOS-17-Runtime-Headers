
@interface _NUIFlowArrangementDummyItem : NSObject <NUIArrangementItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;

@end
