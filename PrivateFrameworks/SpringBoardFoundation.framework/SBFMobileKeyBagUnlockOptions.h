
@interface SBFMobileKeyBagUnlockOptions : NSObject {
    NSData * _passcode;
    bool  _skipSEKeepUserDataOperation;
}

@property (nonatomic, readonly, copy) NSData *passcode;
@property (nonatomic, readonly) bool skipSEKeepUserDataOperation;

- (void).cxx_destruct;
- (id)initWithPasscode:(id)arg1;
- (id)initWithPasscode:(id)arg1 skipSEKeepUserDataOperation:(bool)arg2;
- (id)passcode;
- (bool)skipSEKeepUserDataOperation;

@end
