
@interface BKSMutableHIDEventKeyCommandsRegistration : BKSHIDEventKeyCommandsRegistration

@property (nonatomic, copy) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (nonatomic, copy) BKSHIDEventDeferringToken *deferringToken;
@property (nonatomic, copy) NSSet *keyCommands;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setDeferringEnvironment:(id)arg1;
- (void)setDeferringToken:(id)arg1;
- (void)setKeyCommands:(id)arg1;

@end
