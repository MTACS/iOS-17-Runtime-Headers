
@interface MRUPairingAuthorizationRequest : NSObject {
    long long  _inputType;
    AVOutputDevice * _outputDevice;
}

@property (nonatomic, readonly) long long inputType;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;

- (void).cxx_destruct;
- (void)cancel;
- (void)completeWithPasscode:(id)arg1;
- (id)initWithOutputDevice:(id)arg1;
- (id)initWithOutputDevice:(id)arg1 inputType:(long long)arg2;
- (long long)inputType;
- (id)outputDevice;

@end
