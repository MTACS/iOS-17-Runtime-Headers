
@interface CATTaskRequest : NSObject <NSSecureCoding> {
    bool  _handlesNotifications;
}

@property (nonatomic) bool handlesNotifications;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (bool)handlesNotifications;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setHandlesNotifications:(bool)arg1;

@end
