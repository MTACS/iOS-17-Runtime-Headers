
@interface _BlastDoorLPMapMetadata : _BlastDoorLPSpecializationMetadata {
    NSString * _address;
    CNPostalAddress * _addressComponents;
    NSString * _category;
    _BlastDoorLPImage * _categoryIcon;
    _BlastDoorLPImage * _darkImage;
    NSString * _directionsDestinationAddress;
    CNPostalAddress * _directionsDestinationAddressComponents;
    NSString * _directionsDestinationLocationName;
    NSString * _directionsSourceAddress;
    CNPostalAddress * _directionsSourceAddressComponents;
    NSString * _directionsSourceLocationName;
    NSString * _directionsType;
    NSNumber * _distance;
    _BlastDoorLPImage * _image;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _location;
    NSString * _name;
    NSString * _searchQuery;
    NSNumber * _transportType;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) CNPostalAddress *addressComponents;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, retain) _BlastDoorLPImage *categoryIcon;
@property (nonatomic, retain) _BlastDoorLPImage *darkImage;
@property (nonatomic, copy) NSString *directionsDestinationAddress;
@property (nonatomic, copy) CNPostalAddress *directionsDestinationAddressComponents;
@property (nonatomic, copy) NSString *directionsDestinationLocationName;
@property (nonatomic, copy) NSString *directionsSourceAddress;
@property (nonatomic, copy) CNPostalAddress *directionsSourceAddressComponents;
@property (nonatomic, copy) NSString *directionsSourceLocationName;
@property (nonatomic, copy) NSString *directionsType;
@property (nonatomic, retain) NSNumber *distance;
@property (nonatomic, retain) _BlastDoorLPImage *image;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } location;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *searchQuery;
@property (nonatomic, retain) NSNumber *transportType;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAsynchronousFields:(id /* block */)arg1;
- (id)address;
- (id)addressComponents;
- (id)category;
- (id)categoryIcon;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)darkImage;
- (id)directionsDestinationAddress;
- (id)directionsDestinationAddressComponents;
- (id)directionsDestinationLocationName;
- (id)directionsSourceAddress;
- (id)directionsSourceAddressComponents;
- (id)directionsSourceLocationName;
- (id)directionsType;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })location;
- (id)name;
- (id)searchQuery;
- (void)setAddress:(id)arg1;
- (void)setAddressComponents:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCategoryIcon:(id)arg1;
- (void)setDarkImage:(id)arg1;
- (void)setDirectionsDestinationAddress:(id)arg1;
- (void)setDirectionsDestinationAddressComponents:(id)arg1;
- (void)setDirectionsDestinationLocationName:(id)arg1;
- (void)setDirectionsSourceAddress:(id)arg1;
- (void)setDirectionsSourceAddressComponents:(id)arg1;
- (void)setDirectionsSourceLocationName:(id)arg1;
- (void)setDirectionsType:(id)arg1;
- (void)setDistance:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setName:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setTransportType:(id)arg1;
- (id)transportType;

@end
