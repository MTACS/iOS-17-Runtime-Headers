
@interface DMFOpenURLRequest : DMFTaskRequest {
    NSString * _URLDisplayName;
    NSArray * _handlingBundleIdentifiers;
    bool  _lockInApp;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *URLDisplayName;
@property (nonatomic, copy) NSArray *handlingBundleIdentifiers;
@property (nonatomic) bool lockInApp;
@property (nonatomic, copy) NSURL *url;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLDisplayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handlingBundleIdentifiers;
- (id)initWithCoder:(id)arg1;
- (bool)lockInApp;
- (void)setHandlingBundleIdentifiers:(id)arg1;
- (void)setLockInApp:(bool)arg1;
- (void)setURLDisplayName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
