
@protocol NFCISO7816Tag <NFCTag, NFCNDEFTag>

@required

- (NSData *)applicationData;
- (NSData *)historicalBytes;
- (NSData *)identifier;
- (NSString *)initialSelectedAID;
- (bool)proprietaryApplicationDataCoding;
- (void)sendCommandAPDU:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 10: NFCISO7816APDU *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, unsigned char, unsigned char, NSError *, void*

@end
