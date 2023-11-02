
@interface VUIndexMapping : NSManagedObject

@property (nonatomic) float density;
@property (nonatomic) long long label;
@property (nonatomic, retain) VUIndexObservation *observation;
@property (nonatomic) int partition;
@property (nonatomic) long long partner;
@property (nonatomic) float similarity;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
