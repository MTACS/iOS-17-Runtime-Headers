
@interface FPPathComponentDisplayMetadata : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _bundleID;
    NSURL * _bundleURL;
    NSString * _displayName;
    NSString * _suffix;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly, copy) NSURL *bundleURL;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *suffix;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)bundleID;
- (id)bundleURL;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 displayName:(id)arg2 suffix:(id)arg3 bundleID:(id)arg4 bundleURL:(id)arg5;
- (id)suffix;

@end
