
@interface AVOutputDeviceAuthorizationRequest : NSObject {
    AVOutputDeviceAuthorizationRequestInternal * _ivars;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSString *authorizationTokenType;
@property (readonly) NSError *error;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property (readonly) long long status;

- (id)ID;
- (id)authorizationTokenType;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)impl;
- (id)initWithOutputDeviceAuthorizationRequestImpl:(id)arg1;
- (id)outputDevice;
- (void)respondWithAuthorizationToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)status;

@end
