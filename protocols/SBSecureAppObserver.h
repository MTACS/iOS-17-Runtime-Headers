
@protocol SBSecureAppObserver <NSObject>

@optional

- (void)secureAppOfTypeDidBegin:(unsigned long long)arg1;
- (void)secureAppOfTypeDidEnd:(unsigned long long)arg1;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)arg1;

@end
