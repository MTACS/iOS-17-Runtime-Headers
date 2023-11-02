
@interface TRAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, NSCopying> {
    TRSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TRSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)eraseAnisetteWithCompletion:(id /* block */)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithSession:(id)arg1;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)provisionAnisetteWithCompletion:(id /* block */)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(id /* block */)arg2;

@end
