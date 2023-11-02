
@interface SFSharedWebCredentialsDatabaseEntry : NSObject {
    NSString * _appID;
    bool  _approved;
    NSString * _domain;
    long long  _service;
}

@property (nonatomic, readonly, copy) NSString *appID;
@property (getter=isApproved, nonatomic, readonly) bool approved;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) long long service;

- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 appID:(id)arg2 service:(long long)arg3 isApproved:(bool)arg4;
- (id)appID;
- (id)description;
- (id)domain;
- (id)initWithServiceDetails:(id)arg1;
- (bool)isApproved;
- (long long)service;

@end
