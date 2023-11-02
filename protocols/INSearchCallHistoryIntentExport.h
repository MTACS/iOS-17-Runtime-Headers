
@protocol INSearchCallHistoryIntentExport <NSObject, JSExport>

@required

- (unsigned long long)callCapabilities;
- (unsigned long long)callTypes;
- (INDateComponentsRange *)dateCreated;
- (id)init;
- (long long)preferredCallProvider;
- (INPerson *)recipient;
- (void)setCallCapabilities:(unsigned long long)arg1;
- (void)setCallTypes:(unsigned long long)arg1;
- (void)setDateCreated:(INDateComponentsRange *)arg1;
- (void)setPreferredCallProvider:(long long)arg1;
- (void)setRecipient:(INPerson *)arg1;
- (void)setUnseen:(NSNumber *)arg1;
- (NSNumber *)unseen;

@end