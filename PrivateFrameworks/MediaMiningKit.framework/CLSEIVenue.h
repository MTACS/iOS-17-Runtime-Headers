
@interface CLSEIVenue : NSManagedObject

@property (nonatomic, copy) NSSet *events;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long uuid;

@end
