
@protocol NFCNDEFTag <NSObject, NSSecureCoding, NSCopying>

@required

- (bool)isAvailable;
- (void)queryNDEFStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, NSError *, void*
- (void)readNDEFWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NFCNDEFMessage *, NSError *, void*
- (void)writeLockWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)writeNDEF:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NFCNDEFMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
