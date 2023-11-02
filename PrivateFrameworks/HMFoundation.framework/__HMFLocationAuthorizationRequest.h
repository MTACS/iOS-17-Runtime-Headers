
@interface __HMFLocationAuthorizationRequest : __HMFLocationManagerOperation <HMFLogging> {
    bool  _requested;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long type;

+ (id)logCategory;

- (void)dealloc;
- (id)initWithAuthorization:(id)arg1;
- (id)initWithTimeout:(double)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 authorization:(id)arg2;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)type;

@end
