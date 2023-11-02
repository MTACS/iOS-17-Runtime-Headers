
@interface HFPinCodeItemProvider : HFItemProvider {
    HMAccessory * _accessory;
    HMHome * _home;
    unsigned long long  _listType;
    NSMutableSet * _pinCodeItems;
    HFPinCodeManager * _pinCodeManager;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic) unsigned long long listType;
@property (nonatomic, retain) NSMutableSet *pinCodeItems;
@property (nonatomic, readonly) HFPinCodeManager *pinCodeManager;

- (void).cxx_destruct;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 pinCodeManager:(id)arg2 listType:(unsigned long long)arg3 forAccessory:(id)arg4;
- (id)invalidationReasons;
- (id)items;
- (unsigned long long)listType;
- (id)pinCodeItems;
- (id)pinCodeManager;
- (id)reloadItems;
- (void)setAccessory:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setListType:(unsigned long long)arg1;
- (void)setPinCodeItems:(id)arg1;

@end
