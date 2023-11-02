
@interface NTItemAggregationResult : NSObject <NSCopying> {
    NSDictionary * _aggregatedItemsBySectionDescriptor;
    double  _headlineScale;
    NSDictionary * _slotAllocationByDynamicSlotItemID;
    double  _slotsUsed;
    NSArray * _unusedSectionDescriptors;
}

@property (nonatomic, copy) NSDictionary *aggregatedItemsBySectionDescriptor;
@property (nonatomic) double headlineScale;
@property (nonatomic, readonly) unsigned long long itemCount;
@property (nonatomic, copy) NSDictionary *slotAllocationByDynamicSlotItemID;
@property (nonatomic) double slotsUsed;
@property (nonatomic, copy) NSArray *unusedSectionDescriptors;

- (void).cxx_destruct;
- (id)aggregatedItemsBySectionDescriptor;
- (id)copyWithHeadlineScale:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)headlineScale;
- (double)headlineSlotCostWithSlotCost:(double)arg1;
- (id)init;
- (id)initWithAggregatedItemsBySectionDescriptor:(id)arg1 slotAllocationByDynamicSlotItemID:(id)arg2 unusedSectionDescriptors:(id)arg3;
- (unsigned long long)itemCount;
- (double)sectionOverheadSlotCostWithInfo:(id)arg1;
- (void)setAggregatedItemsBySectionDescriptor:(id)arg1;
- (void)setHeadlineScale:(double)arg1;
- (void)setSlotAllocationByDynamicSlotItemID:(id)arg1;
- (void)setSlotsUsed:(double)arg1;
- (void)setUnusedSectionDescriptors:(id)arg1;
- (id)slotAllocationByDynamicSlotItemID;
- (double)slotCostWithInfo:(id)arg1;
- (double)slotsUsed;
- (id)unusedSectionDescriptors;

@end
