
@interface GDLocationAddress : NSObject <GDSubentity, GDTripleIteratorSubentityRenderer> {
    NSString * _ISOCountryCode;
    NSString * _administrativeArea;
    NSString * _country;
    NSString * _locality;
    NSString * _postalCode;
    GDRelationshipIdentifier * _relationshipIdentifier;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
    NSString * _subPremises;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, readonly) NSString *ISOCountryCode;
@property (nonatomic, readonly) NSString *administrativeArea;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) NSString *locality;
@property (nonatomic, readonly) NSString *postalCode;
@property (nonatomic, readonly) GDRelationshipIdentifier *relationshipIdentifier;
@property (nonatomic, readonly) NSString *subAdministrativeArea;
@property (nonatomic, readonly) NSString *subLocality;
@property (nonatomic, readonly) NSString *subPremises;
@property (nonatomic, readonly) NSString *subThoroughfare;
@property (nonatomic, readonly) NSString *thoroughfare;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (void).cxx_destruct;
- (id)ISOCountryCode;
- (id)administrativeArea;
- (id)country;
- (id)description;
- (id)initWithRelationshipIdTriplesIterator:(id)arg1;
- (id)locality;
- (id)postalCode;
- (id)relationshipIdentifier;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subPremises;
- (id)subThoroughfare;
- (id)thoroughfare;

@end
