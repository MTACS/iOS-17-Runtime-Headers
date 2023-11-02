
@interface GDPerson : NSObject <GDEntity, GDTripleIteratorEntityRenderer> {
    NSDateComponents * _anniversary;
    NSArray * _contactIdentifiers;
    NSArray * _customIdentifiers;
    NSDateComponents * _dateOfBirth;
    NSArray * _emails;
    GDEntityIdentifier * _entityIdentifier;
    bool  _isFavorite;
    GDPersonNameComponents * _nameComponents;
    NSArray * _names;
    NSDateComponents * _nonGregorianDateOfBirth;
    NSArray * _phoneNumbers;
    NSArray * _postalAddressLinks;
    NSArray * _relatedPeople;
    NSArray * _softwareLinks;
    long long  _type;
    NSArray * _visualIdentifierObjects;
    NSArray * _visualIdentifiers;
}

@property (nonatomic, readonly) NSDateComponents *anniversary;
@property (nonatomic, readonly) NSArray *contactIdentifiers;
@property (nonatomic, readonly) NSArray *customIdentifiers;
@property (nonatomic, readonly) NSDateComponents *dateOfBirth;
@property (nonatomic, readonly) NSArray *emails;
@property (nonatomic, readonly) GDEntityIdentifier *entityIdentifier;
@property (nonatomic, readonly) bool isFavorite;
@property (nonatomic, readonly) GDPersonNameComponents *nameComponents;
@property (nonatomic, readonly) NSArray *names;
@property (nonatomic, readonly) NSDateComponents *nonGregorianDateOfBirth;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) NSArray *postalAddressLinks;
@property (nonatomic, readonly) NSArray *relatedPeople;
@property (nonatomic, readonly) NSArray *softwareLinks;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *visualIdentifierObjects;
@property (nonatomic, readonly) NSArray *visualIdentifiers;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (void).cxx_destruct;
- (id)anniversary;
- (id)contactIdentifiers;
- (id)customIdentifiers;
- (id)dateComponentsFromJSONString:(id)arg1;
- (id)dateOfBirth;
- (id)description;
- (id)emails;
- (id)entityIdentifier;
- (id)initWithTriplesIterator:(id)arg1;
- (bool)isFavorite;
- (id)nameComponents;
- (id)names;
- (id)nonGregorianDateOfBirth;
- (id)phoneNumbers;
- (id)postalAddressLinks;
- (id)relatedPeople;
- (id)softwareLinks;
- (long long)type;
- (id)visualIdentifierObjects;
- (id)visualIdentifiers;

@end
