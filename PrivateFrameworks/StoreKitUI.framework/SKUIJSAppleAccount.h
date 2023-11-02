
@interface SKUIJSAppleAccount : NSObject <SKUIJSAppleAccount> {
    ACAccount * _account;
    ACAccount * _nativeAccount;
}

@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSString *accountDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) ACAccount *nativeAccount;
@property (nonatomic, readonly) NSString *username;

- (void).cxx_destruct;
- (id)DSID;
- (id)accountDescription;
- (id)identifier;
- (id)initWithACAccount:(id)arg1;
- (id)nativeAccount;
- (id)username;

@end
