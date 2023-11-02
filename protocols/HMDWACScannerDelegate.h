
@protocol HMDWACScannerDelegate

@required

- (void)scanner:(HMDWACScanner *)arg1 didAddDevice:(id <HMDWACDevice>)arg2;
- (void)scanner:(HMDWACScanner *)arg1 didError:(NSError *)arg2;
- (void)scanner:(HMDWACScanner *)arg1 didRemoveDevice:(id <HMDWACDevice>)arg2;
- (void)scanner:(HMDWACScanner *)arg1 didUpdateDevice:(id <HMDWACDevice>)arg2;
- (void)scannerDidStop:(HMDWACScanner *)arg1;

@end
