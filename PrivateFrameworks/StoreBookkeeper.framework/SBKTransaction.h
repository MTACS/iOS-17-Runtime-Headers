
@interface SBKTransaction : NSObject {
    SBKRequest * _activeRequest;
    NSString * _domain;
    NSURL * _requestURL;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, retain) SBKRequest *activeRequest;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, retain) NSURL *requestURL;
@property (nonatomic, retain) NSMutableDictionary *userInfo;

- (void).cxx_destruct;
- (id)activeRequest;
- (id)clampsKey;
- (id)domain;
- (id)init;
- (id)initWithDomain:(id)arg1 requestURL:(id)arg2;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)requestURL;
- (void)setActiveRequest:(id)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setTransactionContext:(id)arg1 forKey:(id)arg2;
- (void)setUserInfo:(id)arg1;
- (id)transactionContextForKey:(id)arg1;
- (id)userInfo;

@end
