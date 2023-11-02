
@interface LAPSNewPasscodeService : NSObject {
    <LAPSPasscodePersistence> * _persistence;
}

@property (nonatomic, readonly) <LAPSPasscodePersistence> *persistence;

- (void).cxx_destruct;
- (id)allowedPasscodeTypes;
- (id)initWithPersistence:(id)arg1;
- (id)passcodeType;
- (id)persistence;
- (void)verifyPasscode:(id)arg1 completion:(id /* block */)arg2;

@end
