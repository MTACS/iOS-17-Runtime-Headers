
@interface BKSMutableHIDEventDeferringTarget : BKSHIDEventDeferringTarget

@property (nonatomic) int pid;
@property (nonatomic, copy) BKSHIDEventDeferringToken *token;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setPid:(int)arg1;
- (void)setToken:(id)arg1;

@end
