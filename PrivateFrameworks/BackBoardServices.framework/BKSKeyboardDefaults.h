
@interface BKSKeyboardDefaults : BSAbstractDefaultDomain

@property (nonatomic, retain) NSDictionary *modifierKeyRemapping;
@property (nonatomic, retain) NSDictionary *oldModifierKeyRemapping;

- (void)_bindAndRegisterDefaults;
- (id)init;
- (void)migrateIfNeeded;

@end
