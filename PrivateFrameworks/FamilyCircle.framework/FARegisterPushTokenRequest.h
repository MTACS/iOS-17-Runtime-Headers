
@interface FARegisterPushTokenRequest : FAFamilyCircleRequest {
    NSData * _pushToken;
}

@property (readonly, copy) NSData *pushToken;

- (void).cxx_destruct;
- (id)initWithPushToken:(id)arg1;
- (id)pushToken;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
