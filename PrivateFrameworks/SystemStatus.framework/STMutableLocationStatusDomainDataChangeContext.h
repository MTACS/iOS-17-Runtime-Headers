
@interface STMutableLocationStatusDomainDataChangeContext : STLocationStatusDomainDataChangeContext <STMutableStatusDomainDataChangeContext>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;
@property (nonatomic) bool wantsProminentIndication;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUserInitiated:(bool)arg1;
- (void)setWantsProminentIndication:(bool)arg1;

@end
