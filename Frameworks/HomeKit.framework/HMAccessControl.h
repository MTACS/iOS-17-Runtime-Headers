
@interface HMAccessControl : NSObject <NSSecureCoding> {
    unsigned long long  _cachedHash;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMUser * _user;
}

@property (nonatomic, readonly) unsigned long long cachedHash;
@property HMUser *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)cachedHash;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUser:(id)arg1;
- (id)user;

@end
