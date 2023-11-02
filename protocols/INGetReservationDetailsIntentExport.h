
@protocol INGetReservationDetailsIntentExport <NSObject, JSExport>

@required

- (id)init;
- (INSpeakableString *)reservationContainerReference;
- (NSArray *)reservationItemReferences;
- (void)setReservationContainerReference:(INSpeakableString *)arg1;
- (void)setReservationItemReferences:(NSArray *)arg1;

@end
