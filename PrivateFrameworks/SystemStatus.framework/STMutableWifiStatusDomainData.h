
@interface STMutableWifiStatusDomainData : STWifiStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (getter=isAssociatedToIOSHotspot, nonatomic) bool associatedToIOSHotspot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long signalStrengthBars;
@property (readonly) Class superclass;
@property (getter=isWifiActive, nonatomic) bool wifiActive;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAssociatedToIOSHotspot:(bool)arg1;
- (void)setSignalStrengthBars:(unsigned long long)arg1;
- (void)setWifiActive:(bool)arg1;

@end
