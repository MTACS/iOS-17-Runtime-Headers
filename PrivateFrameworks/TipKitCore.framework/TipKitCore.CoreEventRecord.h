
@interface TipKitCore.CoreEventRecord : NSManagedObject

@property (nonatomic, copy) NSSet *donations;
@property (nonatomic, copy) NSDictionary *eventInfo;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, retain) _TtC10TipKitCore13CoreTipRecord *tip;

+ (id)attributes;
+ (id)relationships;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
