
@interface EnergyWindowNotifications : NSManagedObject

@property (nonatomic, copy) NSString *body;
@property (nonatomic) bool dispatched;
@property (nonatomic, copy) NSString *gridID;
@property (nonatomic, copy) NSString *homeID;
@property (nonatomic) bool lastWindowWasClean;
@property (nonatomic) bool recurring;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
