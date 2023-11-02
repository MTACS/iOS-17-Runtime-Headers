
@interface VUIndexTag : NSManagedObject

@property (nonatomic) bool isPrimary;
@property (nonatomic, retain) VUIndexObservation *observation;
@property (nonatomic) bool resolved;
@property (nonatomic) short type;
@property (nonatomic, copy) NSUUID *uuid;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
