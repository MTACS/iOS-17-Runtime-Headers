
@interface DAEGrantedDelegate : NSObject <NSSecureCoding> {
    NSString * _displayName;
    long long  _permission;
    NSString * _preferredUserAddress;
    NSString * _uri;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) long long permission;
@property (nonatomic, copy) NSString *preferredUserAddress;
@property (nonatomic, copy) NSString *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)permission;
- (id)preferredUserAddress;
- (void)setDisplayName:(id)arg1;
- (void)setPermission:(long long)arg1;
- (void)setPreferredUserAddress:(id)arg1;
- (void)setUri:(id)arg1;
- (id)uri;

@end
