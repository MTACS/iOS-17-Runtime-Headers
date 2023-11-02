
@interface VSErrorRecoveryAttempterDelegate : NSObject

+ (id)sharedDelegate;

- (void)didPresentErrorWithRecovery:(bool)arg1 contextInfo:(void*)arg2;

@end
