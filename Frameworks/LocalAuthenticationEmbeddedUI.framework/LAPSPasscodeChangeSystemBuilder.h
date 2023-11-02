
@interface LAPSPasscodeChangeSystemBuilder : NSObject

+ (id)_passcodeChangeSystemWithPersistence:(id)arg1;
+ (id)_passcodeRecoverySystemWithPersistence:(id)arg1;
+ (id)_passcodeStubbedSystem;
+ (id)_persistence;
+ (bool)_useStubbedAdapter;
+ (id)passcodeChangeSystem;
+ (id)passcodeRecoverySystem;

@end
