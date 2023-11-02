
@interface _FTPasswordManagerCachedAuthTokenInfo : NSObject {
    NSDictionary * _alertInfo;
    NSString * _profileID;
    NSString * _selfID;
    NSNumber * _status;
    NSString * _token;
}

@property (nonatomic, retain) NSDictionary *alertInfo;
@property (nonatomic, retain) NSString *profileID;
@property (nonatomic, retain) NSString *selfID;
@property (nonatomic, retain) NSNumber *status;
@property (nonatomic, retain) NSString *token;

- (void).cxx_destruct;
- (id)alertInfo;
- (id)profileID;
- (id)selfID;
- (void)setAlertInfo:(id)arg1;
- (void)setProfileID:(id)arg1;
- (void)setSelfID:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setToken:(id)arg1;
- (id)status;
- (id)token;

@end
