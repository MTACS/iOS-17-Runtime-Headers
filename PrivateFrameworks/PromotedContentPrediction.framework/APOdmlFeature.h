
@interface APOdmlFeature : NSManagedObject

@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic) int deploymentID;
@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic, retain) NSString *featureType;
@property (nonatomic, retain) NSString *treatmentID;
@property (nonatomic, retain) <NSSecureCoding><NSObject> *value;

@end
