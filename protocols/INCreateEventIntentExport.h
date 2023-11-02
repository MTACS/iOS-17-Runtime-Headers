
@protocol INCreateEventIntentExport <NSObject, JSExport>

@required

- (INDateComponentsRange *)dateTimeRange;
- (id)init;
- (CLPlacemark *)location;
- (NSArray *)participants;
- (void)setDateTimeRange:(INDateComponentsRange *)arg1;
- (void)setLocation:(CLPlacemark *)arg1;
- (void)setParticipants:(NSArray *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)title;

@end
