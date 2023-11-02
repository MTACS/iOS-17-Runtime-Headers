
@protocol CXAbstractProviderDelegate <NSObject>

@required

- (void)providerDidReset:(id <CXAbstractProvider>)arg1;

@optional

- (bool)provider:(id <CXAbstractProvider>)arg1 executeTransaction:(CXTransaction *)arg2;
- (void)provider:(id <CXAbstractProvider>)arg1 timedOutPerformingAction:(CXAction *)arg2;
- (void)providerDidBegin:(id <CXAbstractProvider>)arg1;

@end
