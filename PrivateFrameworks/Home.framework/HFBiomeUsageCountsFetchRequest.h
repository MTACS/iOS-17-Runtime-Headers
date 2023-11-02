
@interface HFBiomeUsageCountsFetchRequest : HFBiomeAbstractFetchRequest {
    NSMapTable * _accessoryRepresentablesByUniqueIdentifier;
    id /* block */  _filter;
    NSMapTable * _usageCountByAccessoryRepresentable;
}

@property (retain) NSMapTable *accessoryRepresentablesByUniqueIdentifier;
@property (nonatomic, copy) id /* block */ filter;
@property (retain) NSMapTable *usageCountByAccessoryRepresentable;

- (void).cxx_destruct;
- (id)_accessoryRepresentableWithUniqueIdentifierString:(id)arg1 uniqueIdentifierToAccessoryRepesentableBlock:(id /* block */)arg2;
- (void)_incrementUsageCountForAccessoryRepresentable:(id)arg1;
- (id)accessoryRepresentablesByUniqueIdentifier;
- (void)eventHandler:(id)arg1;
- (id /* block */)filter;
- (id)initWithHome:(id)arg1;
- (void)setAccessoryRepresentablesByUniqueIdentifier:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setUsageCountByAccessoryRepresentable:(id)arg1;
- (id)successHandler;
- (id)usageCountByAccessoryRepresentable;

@end
