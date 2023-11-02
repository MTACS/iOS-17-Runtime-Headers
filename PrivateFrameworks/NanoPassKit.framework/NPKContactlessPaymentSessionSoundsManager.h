
@interface NPKContactlessPaymentSessionSoundsManager : NSObject <NPKContactlessPaymentSessionManagerObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contactlessPaymentSessionManager:(id)arg1 didChangeSessionState:(id)arg2;
- (void)didSelectPassFromField;

@end
