
@interface FBSystemServiceOpenApplicationRequest : NSObject {
    NSString * _bundleIdentifier;
    FBProcess * _clientProcess;
    FBSOpenApplicationOptions * _options;
    bool  _trusted;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) FBProcess *clientProcess;
@property (nonatomic, copy) FBSOpenApplicationOptions *options;
@property (getter=isTrusted, nonatomic) bool trusted;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)clientProcess;
- (id)description;
- (id)initWithBundleId:(id)arg1;
- (bool)isTrusted;
- (id)options;
- (void)setBundleIdentifier:(id)arg1;
- (void)setClientProcess:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTrusted:(bool)arg1;

@end
