
@interface TipKitCore.CoreParameterRecord : NSManagedObject

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSSet *rules;
@property (nonatomic, copy) NSData *valueData;
@property (nonatomic, copy) NSString *valueType;

+ (id)attributes;
+ (id)relationships;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
