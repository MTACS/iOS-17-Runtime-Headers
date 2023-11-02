
@interface ACFPrincipal : NSObject <NSCoding, NSCopying> {
    NSString * _principalString;
    NSString * _realm;
    NSString * _userName;
}

@property (nonatomic, retain) NSString *principalString;
@property (nonatomic, retain) NSString *realm;
@property (nonatomic, retain) NSString *userName;

+ (id)principalWithPrincipalString:(id)arg1;
+ (id)principalWithUserName:(id)arg1 realm:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (id)principalString;
- (id)realm;
- (void)releaseCaches;
- (void)setPrincipalString:(id)arg1;
- (void)setRealm:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)userName;

@end
