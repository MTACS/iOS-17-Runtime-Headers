
@interface GDKTSContextRepresentation : NSObject <GDKTSContextRepresentationProtocol> {
    NSArray * _destinationContext;
    NSArray * _ktsContext;
    NSArray * _originContext;
    NSArray * activities;
    NSArray * destinationActivities;
    NSArray * destinationPeople;
    NSArray * destinationPlaces;
    NSArray * originActivities;
    NSArray * originPeople;
    NSArray * originPlaces;
    NSArray * people;
    NSArray * places;
}

@property (nonatomic, readonly) NSArray *activities;
@property (nonatomic, readonly) NSArray *destinationActivities;
@property (nonatomic, readonly) NSArray *destinationContext;
@property (nonatomic, readonly) NSArray *destinationPeople;
@property (nonatomic, readonly) NSArray *destinationPlaces;
@property (nonatomic, readonly) NSArray *ktsContext;
@property (nonatomic, readonly) NSArray *originActivities;
@property (nonatomic, readonly) NSArray *originContext;
@property (nonatomic, readonly) NSArray *originPeople;
@property (nonatomic, readonly) NSArray *originPlaces;
@property (nonatomic, readonly) NSArray *people;
@property (nonatomic, readonly) NSArray *places;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationActivities;
- (id)destinationContext;
- (id)destinationPeople;
- (id)destinationPlaces;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginContext:(id)arg1 ktsContext:(id)arg2 destinationContext:(id)arg3;
- (id)ktsContext;
- (id)originActivities;
- (id)originContext;
- (id)originPeople;
- (id)originPlaces;
- (id)people;
- (id)places;

@end
