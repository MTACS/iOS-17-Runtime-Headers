
@interface NTKFaceComplicationConfiguration : NSObject <NTKFaceComplicationConfiguration>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultLocalizedNameForComplicationSlot:(id)arg1;

- (bool)complicationExistenceInvalidatesSnapshot;
- (id)complicationSlotDescriptors;
- (id)defaultSelectedComplicationSlotForDevice:(id)arg1;
- (id)localizedNameForComplicationSlot:(id)arg1;
- (id)orderedComplicationSlots;
- (id)richComplicationSlotsForDevice:(id)arg1;

@end
