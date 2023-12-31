
@interface HFMediaAccessControlEditorItemProvider : HFStaticItemProvider {
    NSArray * _accessControlItems;
    HMHome * _home;
    NSMutableDictionary * _itemForIdentifier;
    HFStaticItem * _passwordEnableItem;
    HFStaticItem * _passwordItem;
}

@property (nonatomic, copy) NSArray *accessControlItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSMutableDictionary *itemForIdentifier;
@property (nonatomic, copy) HFStaticItem *passwordEnableItem;
@property (nonatomic, copy) HFStaticItem *passwordItem;

- (void).cxx_destruct;
- (id)_buildItems;
- (id)accessControlItems;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)itemForIdentifier;
- (id)items;
- (id)passwordEnableItem;
- (id)passwordItem;
- (void)setAccessControlItems:(id)arg1;
- (void)setPasswordEnableItem:(id)arg1;
- (void)setPasswordItem:(id)arg1;

@end
