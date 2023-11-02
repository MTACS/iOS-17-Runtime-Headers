
@interface HMUserCloudShareClientInfo : NSObject <NSSecureCoding> {
    NSData * _accountAuthToken;
}

@property (nonatomic, readonly) NSData *accountAuthToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountAuthToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccountAuthToken:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
