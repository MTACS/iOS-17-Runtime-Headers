
@protocol INShowPersonInteractionsIntentExport <NSObject, JSExport>

@required

- (NSString *)focusItemIdentifier;
- (id)init;
- (INPerson *)person;
- (void)setFocusItemIdentifier:(NSString *)arg1;
- (void)setPerson:(INPerson *)arg1;

@end
