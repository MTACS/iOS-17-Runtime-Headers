
@interface FBInterfaceOrientationService : NSObject {
    long long  _interfaceOrientation;
    FBInterfaceOrientationServiceServer * _server;
}

@property (nonatomic, readonly) long long interfaceOrientation;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (long long)interfaceOrientation;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;

@end
