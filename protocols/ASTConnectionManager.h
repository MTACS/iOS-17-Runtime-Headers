
@protocol ASTConnectionManager <NSObject>

@required

- (void)cancelAllTestResults;
- (<ASTConnectionManagerDelegate> *)delegate;
- (void)downloadAsset:(void *)arg1 destinationFileHandle:(void *)arg2 allowsCellularAccess:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSFileHandle *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (ASTIdentity *)identity;
- (bool)postAuthInfo:(ASTAuthInfoResult *)arg1 allowsCellularAccess:(bool)arg2;
- (NSString *)postEnrollAllowingCellularAccess:(bool)arg1;
- (bool)postProfile:(ASTProfileResult *)arg1 allowsCellularAccess:(bool)arg2;
- (ASTResponse *)postRequest:(ASTRequest *)arg1 allowsCellularAccess:(bool)arg2;
- (void)postSealableFile:(void *)arg1 fileSequence:(void *)arg2 totalFiles:(void *)arg3 testId:(void *)arg4 dataId:(void *)arg5 allowsCellularAccess:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 12: ASTSealableFile *, NSString *, NSString *, NSNumber *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)postSessionExistsForIdentities:(void *)arg1 ticket:(void *)arg2 timeout:(void *)arg3 allowsCellularAccess:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: NSArray *, NSString *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)postTestResult:(void *)arg1 allowsCellularAccess:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ASTTestResult *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDelegate:(id <ASTConnectionManagerDelegate>)arg1;
- (void)setIdentity:(ASTIdentity *)arg1;

@end
