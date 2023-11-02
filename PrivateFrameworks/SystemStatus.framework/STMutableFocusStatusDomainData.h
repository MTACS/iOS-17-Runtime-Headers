
@interface STMutableFocusStatusDomainData : STFocusStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *modeIdentifier;
@property (nonatomic, copy) NSString *modeName;
@property (nonatomic, copy) NSString *modeSymbol;
@property (readonly) Class superclass;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setModeIdentifier:(id)arg1;
- (void)setModeName:(id)arg1;
- (void)setModeSymbol:(id)arg1;

@end
