
@protocol INFindEventsIntentExport <NSObject, JSExport>

@required

- (INDateComponentsRange *)dateTimeRange;
- (id)init;
- (CLPlacemark *)location;
- (NSArray *)participants;
- (long long)requestedEventAttribute;
- (NSString *)searchQuery;
- (void)setDateTimeRange:(INDateComponentsRange *)arg1;
- (void)setLocation:(CLPlacemark *)arg1;
- (void)setParticipants:(NSArray *)arg1;
- (void)setRequestedEventAttribute:(long long)arg1;
- (void)setSearchQuery:(NSString *)arg1;

@end
