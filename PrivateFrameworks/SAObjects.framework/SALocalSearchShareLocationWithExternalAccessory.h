
@interface SALocalSearchShareLocationWithExternalAccessory : SADomainCommand

@property (nonatomic, retain) SALocalSearchMapItem *mapItem;
@property (nonatomic) bool useNavigationDestination;

+ (id)shareLocationWithExternalAccessory;
+ (id)shareLocationWithExternalAccessoryWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mapItem;
- (bool)requiresResponse;
- (void)setMapItem:(id)arg1;
- (void)setUseNavigationDestination:(bool)arg1;
- (bool)useNavigationDestination;

@end
