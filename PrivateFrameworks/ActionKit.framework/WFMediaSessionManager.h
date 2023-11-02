
@interface WFMediaSessionManager : NSObject {
    AMSBag * _bag;
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    AMSMediaTask * _task;
}

@property (nonatomic, readonly) AMSBag *bag;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSString *clientVersion;
@property (nonatomic, readonly) AMSMediaTask *task;

- (void).cxx_destruct;
- (id)bag;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1 clientVersion:(id)arg2;
- (void)lookupMediaType:(long long)arg1 withIdentifiers:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)task;

@end
