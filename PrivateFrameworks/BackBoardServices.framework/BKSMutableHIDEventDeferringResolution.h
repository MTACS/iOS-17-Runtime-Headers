
@interface BKSMutableHIDEventDeferringResolution : BKSHIDEventDeferringResolution

@property (nonatomic, retain) BKSHIDEventDispatchingTarget *dispatchingTarget;
@property (nonatomic, copy) BKSHIDEventDisplay *display;
@property (nonatomic, copy) BKSHIDEventDeferringEnvironment *environment;
@property (nonatomic) int pid;
@property (nonatomic, copy) NSString *processDescription;
@property (nonatomic, copy) BKSHIDEventDeferringToken *token;
@property (nonatomic) long long versionedPID;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setDispatchingTarget:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setProcessDescription:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setVersionedPID:(long long)arg1;

@end
