
@protocol MapsSuggestionsContactsConnector <MapsSuggestionsObject>

@required

- (CNContact *)_crossPlatformUnifiedMeContactWithKeysToFetch:(NSArray *)arg1 error:(id*)arg2;
- (CNContact *)contactForIdentifier:(NSString *)arg1;
- (NSData *)dataForContactWithIdentifier:(NSString *)arg1;
- (NSData *)imageDataForIdentifier:(NSString *)arg1;
- (void)setDelegate:(MapsSuggestionsContacts *)arg1;
- (NSString *)singleLineStringFromPostalAddress:(CNPostalAddress *)arg1 addCountryName:(bool)arg2;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;

@end
