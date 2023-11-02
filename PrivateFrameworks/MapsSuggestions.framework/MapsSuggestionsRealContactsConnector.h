
@interface MapsSuggestionsRealContactsConnector : NSObject <MapsSuggestionsContactsConnector> {
    MapsSuggestionsContacts * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)contactForIdentifier:(id)arg1;
- (id)dataForContactWithIdentifier:(id)arg1;
- (id)imageDataForIdentifier:(id)arg1;
- (void)receivedNotification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(bool)arg2;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)uniqueName;

@end
