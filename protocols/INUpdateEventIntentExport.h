
@protocol INUpdateEventIntentExport <NSObject, JSExport>

@required

- (NSArray *)addParticipants;
- (id)init;
- (NSNumber *)removeLocation;
- (NSArray *)removeParticipants;
- (void)setAddParticipants:(NSArray *)arg1;
- (INDateComponentsRange *)setDateTimeRange;
- (CLPlacemark *)setLocation;
- (void)setRemoveLocation:(NSNumber *)arg1;
- (void)setRemoveParticipants:(NSArray *)arg1;
- (void)setSetDateTimeRange:(INDateComponentsRange *)arg1;
- (void)setSetLocation:(CLPlacemark *)arg1;
- (void)setSetTitle:(NSString *)arg1;
- (void)setTargetEventIdentifier:(NSString *)arg1;
- (NSString *)setTitle;
- (void)setUpdateAllOccurrences:(NSNumber *)arg1;
- (NSString *)targetEventIdentifier;
- (NSNumber *)updateAllOccurrences;

@end
