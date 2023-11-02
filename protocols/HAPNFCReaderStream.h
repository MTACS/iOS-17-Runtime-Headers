
@protocol HAPNFCReaderStream

@required

- (void)nfcStreamIndicationFromSource:(unsigned long long)arg1 withPayload:(NSString *)arg2;

@end
