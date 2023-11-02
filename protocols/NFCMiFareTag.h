
@protocol NFCMiFareTag <NFCTag, NFCNDEFTag>

@required

- (NSData *)historicalBytes;
- (NSData *)identifier;
- (unsigned long long)mifareFamily;
- (void)sendMiFareCommand:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)sendMiFareISO7816Command:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 10: NFCISO7816APDU *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, unsigned char, unsigned char, NSError *, void*

@end
