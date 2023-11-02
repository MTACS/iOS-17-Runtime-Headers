
@interface DKCloudUploadResult : NSObject {
    NSError * _error;
    NSNumber * _primaryAccount;
    bool  _success;
    NSString * _username;
}

@property (nonatomic, retain) NSError *error;
@property (getter=isPrimaryAccount, nonatomic, retain) NSNumber *primaryAccount;
@property (nonatomic) bool success;
@property (nonatomic, retain) NSString *username;

+ (id)resultWithAccount:(id)arg1 success:(bool)arg2 error:(id)arg3;
+ (id)resultWithSuccess:(bool)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)isPrimaryAccount;
- (void)setError:(id)arg1;
- (void)setPrimaryAccount:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setUsername:(id)arg1;
- (bool)success;
- (id)username;

@end
