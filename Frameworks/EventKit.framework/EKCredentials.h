
@interface EKCredentials : NSObject {
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) NSString *username;

+ (id)credentialsWithUsername:(id)arg1 password:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)password;
- (id)username;

@end
