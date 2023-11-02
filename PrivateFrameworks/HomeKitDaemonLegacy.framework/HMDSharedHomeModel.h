
@interface HMDSharedHomeModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *configurationVersion;
@property (nonatomic, retain) NSData *homeData;

+ (id)properties;

- (bool)isReplayable;

@end
