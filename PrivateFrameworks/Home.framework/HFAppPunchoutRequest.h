
@interface HFAppPunchoutRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _name;
    NSURL * _payloadURL;
    NSURL * _storeURL;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *payloadURL;
@property (nonatomic, readonly) NSURL *storeURL;

+ (id)_openApplicationService;
+ (bool)canHandleBundleID:(id)arg1;
+ (id)handleRequest:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 payloadURL:(id)arg3 storeURL:(id)arg4;
- (id)name;
- (id)payloadURL;
- (id)storeURL;

@end
