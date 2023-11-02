
@protocol DCCryptoProxy <NSObject>

@required

- (void)fetchOpaqueBlobWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DCContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@optional

- (void)baaSignatureForData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSData *, NSError *, void*
- (void)baaSignaturesForData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSData *, NSError *, void*

@end
