
@protocol ML3ClientImportSessionXPCInterface <NSObject>

@optional

- (void)sessionDidUpdateProgress:(float)arg1;
- (void)sessionFailedToAddItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ML3ClientImportItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sessionFailedToRemoveItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ML3ClientImportItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sessionFailedToUpdateItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ML3ClientImportItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
