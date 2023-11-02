
@interface AMSExportMultiUserStateTask : AMSTask {
    NSUUID * _homeIdentifier;
    <AMSMultiUserServiceProtocol> * _multiUserService;
    unsigned long long  _options;
}

@property (nonatomic, readonly) NSUUID *homeIdentifier;
@property (nonatomic, readonly) <AMSMultiUserServiceProtocol> *multiUserService;
@property (nonatomic, readonly) unsigned long long options;

- (void).cxx_destruct;
- (id)homeIdentifier;
- (id)initWithHomeIdentifier:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithHomeIdentifier:(id)arg1 options:(unsigned long long)arg2 multiUserService:(id)arg3;
- (id)multiUserService;
- (unsigned long long)options;
- (id)performTask;

@end
