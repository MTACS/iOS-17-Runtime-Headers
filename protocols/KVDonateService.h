
@protocol KVDonateService

@required

- (oneway void)abortDatasetStream;
- (void)addItems:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, void*
- (oneway void)closeDatasetStream:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, unsigned short, void*
- (oneway void)openDatasetStream:(void *)arg1 validity:(void *)arg2 itemType:(void *)arg3 originAppId:(void *)arg4 deviceId:(void *)arg5 userId:(void *)arg6 options:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: unsigned long long, NSString *, long long, NSString *, NSString *, NSString *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, unsigned long long, void*
- (void)removeItemId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, void*

@end
