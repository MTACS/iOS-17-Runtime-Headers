
@interface HFPinCodeListModule : HFItemModule {
    HMAccessory * _accessory;
    HFStaticItem * _addPinCodeItem;
    <HFItemSectionAccessoryButtonHeaderDelegate> * _editButtonHeaderDelegate;
    HMHome * _home;
    NSSet * _itemProviders;
    unsigned long long  _listType;
    HFPinCodeItemProvider * _pinCodeItemProvider;
    HFPinCodeManager * _pinCodeManager;
    HFStaticItem * _revokePinCodeItem;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) HFStaticItem *addPinCodeItem;
@property (nonatomic) <HFItemSectionAccessoryButtonHeaderDelegate> *editButtonHeaderDelegate;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long listType;
@property (nonatomic, retain) HFPinCodeItemProvider *pinCodeItemProvider;
@property (nonatomic, readonly) HFPinCodeManager *pinCodeManager;
@property (nonatomic, retain) HFStaticItem *revokePinCodeItem;

- (void).cxx_destruct;
- (id)_sectionIdentifier;
- (id)accessory;
- (id)addPinCodeItem;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)editButtonHeaderDelegate;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 pinCodeManager:(id)arg2 listType:(unsigned long long)arg3 home:(id)arg4 forAccessory:(id)arg5;
- (id)itemProviders;
- (unsigned long long)listType;
- (id)pinCodeItemProvider;
- (id)pinCodeManager;
- (id)revokePinCodeItem;
- (void)setAccessory:(id)arg1;
- (void)setAddPinCodeItem:(id)arg1;
- (void)setEditButtonHeaderDelegate:(id)arg1;
- (void)setListType:(unsigned long long)arg1;
- (void)setPinCodeItemProvider:(id)arg1;
- (void)setRevokePinCodeItem:(id)arg1;

@end
