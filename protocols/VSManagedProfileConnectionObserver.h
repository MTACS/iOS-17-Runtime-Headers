
@protocol VSManagedProfileConnectionObserver <NSObject>

@optional

- (void)profileConnectionProfileChanged:(VSManagedProfileConnection *)arg1;
- (void)profileConnectionSettingsChanged:(VSManagedProfileConnection *)arg1;

@end
