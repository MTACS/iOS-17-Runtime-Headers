
@interface _DKCustomMetadataMO : NSManagedObject

@property (nonatomic, copy) NSData *binaryValue;
@property (nonatomic, copy) NSDate *dateValue;
@property (nonatomic, copy) NSNumber *doubleValue;
@property (nonatomic, retain) NSSet *event;
@property (nonatomic, copy) NSNumber *integerValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, copy) NSString *valueHash;

+ (id)fetchRequest;

@end
