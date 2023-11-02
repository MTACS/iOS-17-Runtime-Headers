
@interface FinanceKit.ManagedOrderImage : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic) int height;
@property (nonatomic, copy) NSString *localizationName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _TtC10FinanceKit13StorableColor *storedBackgroundColor;
@property (nonatomic) int width;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
