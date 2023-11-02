
@interface HUNearbyAccessoriesEditorServiceGridViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {
    HMAccessory * _primaryAccessory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFItemManager *itemManager;
@property (nonatomic, retain) HMAccessory *primaryAccessory;
@property (readonly) Class superclass;

+ (id /* block */)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1 accessoryProfileItem:(id)arg2;

- (void).cxx_destruct;
- (id)initWithAccessoryProfileSourceItem:(id)arg1;
- (id)primaryAccessory;
- (bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)setPrimaryAccessory:(id)arg1;

@end
