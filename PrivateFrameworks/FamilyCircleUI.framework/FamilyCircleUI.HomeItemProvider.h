
@interface FamilyCircleUI.HomeItemProvider : _TtGC14FamilyCircleUI17AsyncItemProviderVS_12HomeDataItem_ <HMHomeManagerDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _items;
    void familyCircleStore;
    void homeManager;
    void homes;
}

- (void).cxx_destruct;
- (void)handleNotification;
- (void)homeManagerDidUpdateHomes:(id)arg1;

@end
