
@interface PlusContactSuggestionStoreUpdateRecord : NSManagedObject

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSDate *timestamp;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
