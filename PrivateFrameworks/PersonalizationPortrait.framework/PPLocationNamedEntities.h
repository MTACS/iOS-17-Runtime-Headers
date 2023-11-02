
@interface PPLocationNamedEntities : NSObject <NSCopying, NSSecureCoding> {
    NSString * _city;
    NSString * _country;
    NSDate * _date;
    NSString * _documentId;
    CLLocation * _location;
    NSString * _locationName;
    NSData * _mapItem;
    NSString * _postalCode;
    double  _score;
    NSString * _stateOrProvince;
    NSString * _streetAddress;
    NSString * _unstructuredLocationString;
}

@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *documentId;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSString *locationName;
@property (nonatomic, retain) NSData *mapItem;
@property (nonatomic, retain) NSString *postalCode;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *stateOrProvince;
@property (nonatomic, retain) NSString *streetAddress;
@property (nonatomic, retain) NSString *unstructuredLocationString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)date;
- (id)documentId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)location;
- (id)locationName;
- (id)mapItem;
- (id)postalCode;
- (double)score;
- (void)setCity:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDocumentId:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setPostalCode:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setStateOrProvince:(id)arg1;
- (void)setStreetAddress:(id)arg1;
- (void)setUnstructuredLocationString:(id)arg1;
- (id)stateOrProvince;
- (id)streetAddress;
- (id)unstructuredLocationString;

@end
