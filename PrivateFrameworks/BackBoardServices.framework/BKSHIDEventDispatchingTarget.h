
@interface BKSHIDEventDispatchingTarget : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding> {
    BKSHIDEventDeferringEnvironment * _environment;
    int  _pid;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;

+ (id)focusTargetForPID:(int)arg1;
+ (id)keyboardFocusTarget;
+ (bool)supportsSecureCoding;
+ (id)systemTarget;
+ (id)targetForDeferringEnvironment:(id)arg1;
+ (id)targetForPID:(int)arg1 environment:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithEnvironment:(id)arg1 pid:(int)arg2;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferringEnvironment;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;

@end
