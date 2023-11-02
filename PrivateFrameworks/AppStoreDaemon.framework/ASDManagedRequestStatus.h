
@interface ASDManagedRequestStatus : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSUUID * _requestIdentifier;
    long long  _state;
    NSString * _title;
}

@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *bundleVersion;
@property (retain) NSUUID *requestIdentifier;
@property long long state;
@property (retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)state;
- (id)title;

@end
