
@protocol GDKTSContextRepresentationProtocol <NSSecureCoding, NSCopying>

@required

- (NSArray *)activities;
- (NSArray *)destinationActivities;
- (NSArray *)destinationPeople;
- (NSArray *)destinationPlaces;
- (NSArray *)originActivities;
- (NSArray *)originPeople;
- (NSArray *)originPlaces;
- (NSArray *)people;
- (NSArray *)places;

@end
