
@interface BKSHIDEventDeferringPredicate : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDisplay * _display;
    BKSHIDEventDeferringEnvironment * _environment;
    BKSHIDEventDeferringToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) BKSHIDEventDisplay *display;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) BKSHIDEventDeferringToken *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithEnvironment:(id)arg1 display:(id)arg2 token:(id)arg3;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)display;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)token;

@end
