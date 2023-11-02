
@interface PXErrorRecoveryDelegate : NSObject

+ (id)sharedErrorRecoveryDelegate;

- (void)_didPresentErrorWithRecovery:(bool)arg1 contextInfo:(void*)arg2;

@end
