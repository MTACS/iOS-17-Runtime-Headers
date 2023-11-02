
@protocol STSHelperLibraryDelegateProtocol

@optional

- (void)handoverSelected:(unsigned long long)arg1;
- (void)iso18013DataRetrievalCompleted;
- (void)relinquishSEProxy;
- (void)reqlinquishNFCReaderProxy;
- (void)restartNFCReaderDiscovery;

@end
