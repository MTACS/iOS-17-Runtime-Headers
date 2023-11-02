
@interface STMutableStewieStatusDomainData : STStewieStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStewieActive, nonatomic) bool stewieActive;
@property (getter=isStewieConnected, nonatomic) bool stewieConnected;
@property (readonly) Class superclass;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setStewieActive:(bool)arg1;
- (void)setStewieConnected:(bool)arg1;

@end
