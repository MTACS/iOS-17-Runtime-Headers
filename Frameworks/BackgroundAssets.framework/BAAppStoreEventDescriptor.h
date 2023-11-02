
@interface BAAppStoreEventDescriptor : NSObject <NSSecureCoding> {
    NSString * _appBundleIdentifier;
    NSURL * _appBundleURL;
    bool  _automaticInstall;
    unsigned long long  _clientType;
    unsigned long long  _eventType;
    bool  _userInitiated;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSURL *appBundleURL;
@property (nonatomic) bool automaticInstall;
@property (nonatomic, readonly) unsigned long long clientType;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic) bool userInitiated;

+ (id)descriptorWithAppBundleIdentifier:(id)arg1 appBundleURL:(id)arg2 event:(unsigned long long)arg3 client:(unsigned long long)arg4;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)appBundleURL;
- (bool)automaticInstall;
- (unsigned long long)clientType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAutomaticInstall:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)userInitiated;

@end
