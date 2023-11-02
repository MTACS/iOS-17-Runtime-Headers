
@interface DNDMutableModeAssertionDetails : DNDModeAssertionDetails

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) DNDModeAssertionLifetime *lifetime;
@property (nonatomic, copy) NSDate *modeConfigurationModifiedDate;
@property (nonatomic, copy) NSString *modeIdentifier;
@property (nonatomic) unsigned long long reason;
@property (nonatomic, copy) NSDate *userVisibleEndDate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLifetime:(id)arg1;
- (void)setModeConfigurationModifiedDate:(id)arg1;
- (void)setModeIdentifier:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setUserVisibleEndDate:(id)arg1;

@end
