
@interface NotesShared.ICSystemPaperDocument : NSObject {
    void attachment;
}

@property (nonatomic, readonly) CRContext *coherenceContext;

+ (id)assetsDirectoryAt:(id)arg1;
+ (void)closeContextForNote:(id)arg1;
+ (id)databaseDirectoryAt:(id)arg1;

- (void).cxx_destruct;
- (id)archiveBundleForSyncAndReturnError:(id*)arg1;
- (id)coherenceContext;
- (bool)copyAndArchivePaperBundleTo:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithPaperAttachment:(id)arg1;
- (bool)restorePaperBundleFrom:(id)arg1 error:(id*)arg2;
- (void)toFallbackPDFDataWithCompletion:(id /* block */)arg1;
- (bool)writeNewVersionFromSyncArchive:(id)arg1 error:(id*)arg2;

@end
