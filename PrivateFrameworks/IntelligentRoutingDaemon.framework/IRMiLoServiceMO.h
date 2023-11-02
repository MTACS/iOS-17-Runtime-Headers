
@interface IRMiLoServiceMO : NSManagedObject

@property (nonatomic, retain) IRServiceMO *service;
@property (nonatomic, retain) NSString *serviceUuidString;

+ (id)fetchRequest;
+ (void)setPropertiesOfMiLoServiceMO:(id)arg1 withMiLoServiceUuidString:(id)arg2;

- (id)convert;

@end
