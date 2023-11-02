
@interface STMutablePlaygroundsStatusDomainData : STPlaygroundsStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPlaygroundsActive, nonatomic) bool playgroundsActive;
@property (readonly) Class superclass;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPlaygroundsActive:(bool)arg1;

@end
