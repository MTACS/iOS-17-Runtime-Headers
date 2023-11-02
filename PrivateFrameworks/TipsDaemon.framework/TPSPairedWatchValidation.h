
@interface TPSPairedWatchValidation : TPSTargetingValidation {
    NSUUID * _capability;
}

@property (nonatomic, copy) NSUUID *capability;

- (void).cxx_destruct;
- (id)capability;
- (id)initWithCapability:(id)arg1;
- (void)setCapability:(id)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
