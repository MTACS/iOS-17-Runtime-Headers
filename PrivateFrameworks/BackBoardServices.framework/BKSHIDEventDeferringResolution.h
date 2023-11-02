
@interface BKSHIDEventDeferringResolution : NSObject <BKSHIDEventBaseAttributeSubsetProviding, BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDispatchingTarget * _dispatchingTarget;
    BKSHIDEventDisplay * _display;
    BKSHIDEventDeferringEnvironment * _environment;
    bool  _isBuffer;
    int  _pid;
    NSString * _processDescription;
    BKSHIDEventDeferringToken * _token;
    long long  _versionedPID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BKSHIDEventDispatchingTarget *dispatchingTarget;
@property (nonatomic, readonly, copy) BKSHIDEventDisplay *display;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBuffer;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly, copy) NSString *processDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringToken *token;
@property (nonatomic, readonly) long long versionedPID;

+ (id)build:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dispatchingTarget;
- (id)display;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBuffer;
- (bool)isEqual:(id)arg1;
- (id)modifiedResolution:(id /* block */)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (int)pid;
- (id)processDescription;
- (id)token;
- (long long)versionedPID;

@end
