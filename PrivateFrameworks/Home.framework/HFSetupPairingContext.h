
@interface HFSetupPairingContext : NSObject {
    bool  _isTrustedOrigin;
    HMSetupAccessoryDescription * _setupAccessoryDescription;
}

@property (nonatomic) bool isTrustedOrigin;
@property (nonatomic, retain) HMSetupAccessoryDescription *setupAccessoryDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSetupAccessoryDescription:(id)arg1 isTrustedOrigin:(bool)arg2;
- (bool)isTrustedOrigin;
- (void)setIsTrustedOrigin:(bool)arg1;
- (void)setSetupAccessoryDescription:(id)arg1;
- (id)setupAccessoryDescription;

@end
