
@interface SpeakableLocation : INObject

@property (nonatomic, copy) NSString *administrativeArea;
@property (nonatomic, copy) NSArray *areasOfInterest;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *fullThoroughfare;
@property (nonatomic, retain) NSNumber *isCoarse;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) INSpeakableString *locality;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) INSpeakableString *name;
@property (nonatomic, copy) NSString *subThoroughfare;
@property (nonatomic, copy) NSString *thoroughfare;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
