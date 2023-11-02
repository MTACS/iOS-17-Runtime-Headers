
@interface CRKOpenURLRequest : CATTaskRequest {
    NSURL * _URL;
    NSString * _URLDisplayName;
    NSArray * _handlingBundleIdentifiers;
    bool  _lockInApp;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *URLDisplayName;
@property (nonatomic, copy) NSArray *handlingBundleIdentifiers;
@property (nonatomic) bool lockInApp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)URLDisplayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handlingBundleIdentifiers;
- (id)initWithCoder:(id)arg1;
- (bool)lockInApp;
- (void)setHandlingBundleIdentifiers:(id)arg1;
- (void)setLockInApp:(bool)arg1;
- (void)setURL:(id)arg1;
- (void)setURLDisplayName:(id)arg1;

@end
