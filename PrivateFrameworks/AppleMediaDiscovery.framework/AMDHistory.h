
@interface AMDHistory : NSManagedObject

@property (nonatomic) short day;
@property (nonatomic) short domain;
@property (nonatomic, retain) NSData *results;
@property (nonatomic, copy) NSString *useCaseId;
@property (nonatomic, copy) NSString *userId;

+ (id)fetchRequest;

@end
