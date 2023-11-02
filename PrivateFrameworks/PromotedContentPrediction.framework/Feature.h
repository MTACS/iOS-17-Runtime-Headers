
@interface Feature : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic) int deploymentID;
@property (nonatomic, copy) NSString *experimentID;
@property (nonatomic, copy) NSString *featureType;
@property (nonatomic, copy) NSString *treatmentID;
@property (nonatomic, retain) APOdmlVector *value;

+ (id)fetchRequest;

@end
