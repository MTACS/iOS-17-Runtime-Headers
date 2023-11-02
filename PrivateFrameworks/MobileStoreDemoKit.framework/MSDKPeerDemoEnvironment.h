
@interface MSDKPeerDemoEnvironment : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andDisplayName:(id)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
