
@interface XBLaunchImageError : NSError {
    bool  _fatal;
    bool  _shouldDeny;
}

@property (getter=isFatal, readonly) bool fatal;
@property (readonly) bool shouldDeny;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 bundleID:(id)arg2 reason:(id)arg3 fatal:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isFatal;
- (bool)shouldDeny;

@end
