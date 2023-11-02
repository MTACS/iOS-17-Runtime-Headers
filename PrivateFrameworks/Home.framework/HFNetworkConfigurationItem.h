
@interface HFNetworkConfigurationItem : HFAccessoryProfileItem

@property (nonatomic, readonly) HMNetworkConfigurationProfile *profile;

+ (id /* block */)defaultItemComparator;

- (id)_subclass_updateWithOptions:(id)arg1;

@end
