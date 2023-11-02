
@interface TILoginCredential : NSObject <NSCopying> {
    NSString * _password;
    NSString * _site;
    NSString * _username;
}

@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSString *site;
@property (nonatomic, readonly) NSString *username;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithUsername:(id)arg1 password:(id)arg2 site:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)password;
- (id)site;
- (id)username;

@end
