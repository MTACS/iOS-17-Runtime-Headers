
@interface DNDSMutableExplicitRegionStore : DNDSExplicitRegionStore

@property (nonatomic, copy) NSSet *enteredRegionIdentifiersPendingExit;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEnteredRegionIdentifiersPendingExit:(id)arg1;

@end
