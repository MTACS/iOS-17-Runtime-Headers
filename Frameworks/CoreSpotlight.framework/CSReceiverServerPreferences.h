
@interface CSReceiverServerPreferences : CoreSpotlightPreferences

@property (nonatomic, readonly, copy) NSSet *disabledServices;

- (void)disableService:(id)arg1;
- (id)disabledServices;
- (void)enableService:(id)arg1;
- (id)init;

@end
