
@interface SBDataRecoveryController : NSObject {
    SBFMobileKeyBag * _mobileKeyBag;
}

@property (nonatomic, readonly) bool dataRecoveryRequired;

- (void).cxx_destruct;
- (bool)dataRecoveryRequired;
- (id)init;
- (id)initWithMobileKeyBag:(id)arg1;
- (void)performDataRecovery;

@end
