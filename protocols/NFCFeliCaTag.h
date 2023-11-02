
@protocol NFCFeliCaTag <NFCTag, NFCNDEFTag>

@required

- (NSData *)currentIDm;
- (NSData *)currentSystemCode;
- (void)pollingWithSystemCode:(void *)arg1 requestCode:(void *)arg2 timeSlot:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSData *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSData *, NSError *, void*
- (void)readWithoutEncryptionWithServiceCodeList:(void *)arg1 blockList:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, NSArray *, NSError *, void*
- (void)requestResponseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)requestServiceV2WithNodeCodeList:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, long long, NSArray *, NSArray *, NSError *, void*
- (void)requestServiceWithNodeCodeList:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestSpecificationVersionWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, NSData *, NSData *, NSError *, void*
- (void)requestSystemCodeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)resetModeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, NSError *, void*
- (void)sendFeliCaCommandPacket:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)writeWithoutEncryptionWithServiceCodeList:(void *)arg1 blockList:(void *)arg2 blockData:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSArray *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, long long, NSError *, void*

@end
