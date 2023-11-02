
@interface IMTransferServicesCompressionController : NSObject {
    NSMutableDictionary * _blockMap;
}

+ (id)sharedInstance;

- (id /* block */)_blockForCopier:(id)arg1;
- (void)_mapCopier:(id)arg1 toBlock:(id /* block */)arg2;
- (void)_unmapCopier:(id)arg1;
- (void)compressFileTransfer:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;

@end
