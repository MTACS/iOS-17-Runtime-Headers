
@interface STMutableAirPlayStatusDomainData : STAirPlayStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (nonatomic) unsigned long long airPlayState;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAirPlayState:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;

@end
