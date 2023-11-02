
@interface GDVisualIdentifierViewPerson : GDPerson {
    NSArray * _bundleIdentifiers;
    NSArray * _conversationIdentifiers;
    NSArray * _locations;
}

@property (nonatomic, readonly) NSDateComponents *anniversary;
@property (nonatomic, retain) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) NSArray *contactIdentifiers;
@property (nonatomic, retain) NSArray *conversationIdentifiers;
@property (nonatomic, readonly) NSDateComponents *dateOfBirth;
@property (nonatomic, readonly) NSArray *emails;
@property (nonatomic, retain) NSArray *locations;
@property (nonatomic, readonly) GDPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSArray *names;
@property (nonatomic, readonly) NSDateComponents *nonGregorianDateOfBirth;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *postalAddressLinks;
@property (nonatomic, readonly) NSArray *relatedPeople;
@property (nonatomic, readonly) NSArray *softwareLinks;
@property (nonatomic, readonly) NSArray *visualIdentifierObjects;
@property (nonatomic, readonly) NSArray *visualIdentifiers;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)conversationIdentifiers;
- (id)description;
- (id)locations;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setConversationIdentifiers:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)shortArrayDescription:(id)arg1;

@end
