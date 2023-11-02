
@interface MFExchangeConnection : MFIMAPConnection

- (id)_fetchArgumentForMessageSkeletonsWithAllHeaders;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (bool)_isFetchResponseValid:(id)arg1;

@end
