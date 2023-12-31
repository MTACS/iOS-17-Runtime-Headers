
@interface HUQuickControlViewControllerConfiguration : NSObject {
    bool  _copyItems;
    HMHome * _home;
    <HUQuickControlItemUpdating> * _itemUpdater;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic) bool copyItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) <HUQuickControlItemUpdating> *itemUpdater;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (bool)copyItems;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithMediaRoutingIdentifier:(id)arg1;
- (id)itemUpdater;
- (void)setCopyItems:(bool)arg1;
- (void)setItemUpdater:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
