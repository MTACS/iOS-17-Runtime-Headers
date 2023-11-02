
@interface FMDFMIPAccountInfo : NSObject <NSSecureCoding> {
    NSString * _dsid;
    NSString * _oneTimeRemoveAuthToken;
    NSURL * _serverURL;
    NSString * _username;
}

@property (nonatomic, copy) NSString *dsid;
@property (nonatomic, copy) NSString *oneTimeRemoveAuthToken;
@property (copy) NSURL *serverURL;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserName:(id)arg1 dsid:(id)arg2 oneTimeRemoveAuthToken:(id)arg3 serverURL:(id)arg4;
- (id)oneTimeRemoveAuthToken;
- (id)serverURL;
- (void)setDsid:(id)arg1;
- (void)setOneTimeRemoveAuthToken:(id)arg1;
- (void)setServerURL:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
