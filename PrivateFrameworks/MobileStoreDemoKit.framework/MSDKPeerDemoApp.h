
@interface MSDKPeerDemoApp : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _localizedName;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *localizedName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 andLocalizedName:(id)arg2;
- (id)localizedName;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedName:(id)arg1;

@end
