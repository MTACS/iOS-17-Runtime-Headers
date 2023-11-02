
@interface GDKTSContextAggregateRepresentation : NSObject <GDKTSContextRepresentationProtocol> {
    NSArray * _destinationContexts;
    NSArray * _ktsContexts;
    NSArray * _originContexts;
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
@property (nonatomic, readonly) NSArray *destinationContexts;
@property (nonatomic, readonly) NSArray *destinationPeople;
@property (nonatomic, readonly) NSArray *destinationPlaces;
@property (nonatomic, readonly) NSArray *ktsContexts;
@property (nonatomic, readonly) NSArray *originActivities;
@property (nonatomic, readonly) NSArray *originContexts;
@property (nonatomic, readonly) NSArray *originPeople;
@property (nonatomic, readonly) NSArray *originPlaces;
@property (nonatomic, readonly) NSArray *people;
@property (nonatomic, readonly) NSArray *places;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationActivities;
- (id)destinationContexts;
- (id)destinationPeople;
- (id)destinationPlaces;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginContexts:(id)arg1 ktsContexts:(id)arg2 destinationContexts:(id)arg3;
- (id)ktsContexts;
- (id)originActivities;
- (id)originContexts;
- (id)originPeople;
- (id)originPlaces;
- (id)people;
- (id)places;

@end
