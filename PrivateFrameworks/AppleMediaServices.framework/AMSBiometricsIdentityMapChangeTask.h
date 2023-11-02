
@interface AMSBiometricsIdentityMapChangeTask : AMSTask {
    ACAccount * _account;
    AMSURLSession * _session;
    NSURLSessionTask * _task;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AMSURLSession *session;
@property (nonatomic, retain) NSURLSessionTask *task;

- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)arg1 session:(id)arg2 task:(id)arg3;
- (id)perform;
- (id)session;
- (void)setAccount:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
