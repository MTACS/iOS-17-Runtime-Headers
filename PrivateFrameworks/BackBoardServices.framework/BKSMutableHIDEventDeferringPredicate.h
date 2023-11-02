
@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate

@property (nonatomic, copy) BKSHIDEventDisplay *display;
@property (nonatomic, copy) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic, copy) BKSHIDEventDeferringToken *token;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setDisplay:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setToken:(id)arg1;

@end
