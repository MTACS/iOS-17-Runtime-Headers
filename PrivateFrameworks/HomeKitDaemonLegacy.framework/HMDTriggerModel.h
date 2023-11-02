
@interface HMDTriggerModel : HMDBackingStoreModelObject

@property (nonatomic, copy) NSNumber *active;
@property (nonatomic, retain) NSNumber *autoDelete;
@property (nonatomic, retain) NSString *configuredName;
@property (nonatomic, retain) NSArray *currentActionSets;
@property (nonatomic, copy) NSDate *mostRecentFireDate;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) HMDUser *owner;
@property (nonatomic, retain) HMDDevice *owningDevice;

+ (id)properties;

- (id)createPayload;
- (id)dependentUUIDs;

@end
