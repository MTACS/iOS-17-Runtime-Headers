
@protocol CLKComplicationServer <NSObject>

@required

- (void)checkinWithClientIdentifier:(NSString *)arg1 bundlePath:(NSString *)arg2;
- (void)extendTimelineForComplication:(CLKComplication *)arg1;
- (void)reloadComplicationDescriptors;
- (void)reloadTimelineForComplication:(CLKComplication *)arg1;

@end
