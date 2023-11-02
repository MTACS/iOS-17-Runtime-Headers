
@interface NTKCornerComplicationConfiguration : NTKFaceComplicationConfiguration {
    unsigned long long  _bottomLeftComplication;
    unsigned long long  _bottomRightComplication;
    unsigned long long  _topLeftComplication;
    unsigned long long  _topRightComplication;
}

- (bool)complicationExistenceInvalidatesSnapshot;
- (id)complicationSlotDescriptors;
- (id)defaultSelectedComplicationSlotForDevice:(id)arg1;
- (id)init;
- (id)initWithTopLeftComplication:(unsigned long long)arg1 topRightComplication:(unsigned long long)arg2 bottomLeftComplication:(unsigned long long)arg3 bottomRightComplication:(unsigned long long)arg4;
- (id)orderedComplicationSlots;
- (id)richComplicationSlotsForDevice:(id)arg1;

@end
