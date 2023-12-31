
@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject {
    bool  _homeHasLocalChanges;
}

@property (nonatomic, retain) NSNumber *configurationVersion;
@property (nonatomic) bool homeHasLocalChanges;

+ (id)properties;

- (bool)homeHasLocalChanges;
- (void)setHomeHasLocalChanges:(bool)arg1;

@end
