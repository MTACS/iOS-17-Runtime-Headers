
@interface BKSMousePointerGlobalContextOptions : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _pinOnButtonDown;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool pinOnButtonDown;
@property (readonly) Class superclass;

+ (id)build:(id /* block */)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)pinOnButtonDown;

@end
