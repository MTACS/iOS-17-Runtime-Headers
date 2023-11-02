
@protocol NTKFaceComplicationConfiguration <NSObject>

@required

+ (NSString *)defaultLocalizedNameForComplicationSlot:(NSString *)arg1;

- (bool)complicationExistenceInvalidatesSnapshot;
- (NSDictionary *)complicationSlotDescriptors;
- (NSString *)defaultSelectedComplicationSlotForDevice:(CLKDevice *)arg1;
- (NSString *)localizedNameForComplicationSlot:(NSString *)arg1;
- (NSArray *)orderedComplicationSlots;
- (NSArray *)richComplicationSlotsForDevice:(CLKDevice *)arg1;

@optional

- (NSString *)dateComplicationSlotForDevice:(CLKDevice *)arg1;
- (unsigned long long)dateComplicationSlotSupportedStylesForDevice:(CLKDevice *)arg1;

@end
