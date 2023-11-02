
@interface HUChimeOnAccessoriesListItem : HFItem {
    bool  _accessoryIsCameraWithDoorbell;
    HMHome * _home;
}

@property (nonatomic) bool accessoryIsCameraWithDoorbell;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)accessoryIsCameraWithDoorbell;
- (id)home;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (id)initWithHome:(id)arg1;
- (void)setAccessoryIsCameraWithDoorbell:(bool)arg1;

@end
