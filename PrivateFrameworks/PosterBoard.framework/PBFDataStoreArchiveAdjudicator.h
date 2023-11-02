
@interface PBFDataStoreArchiveAdjudicator : NSObject {
    NSURL * _archiveBaseURL;
    NSURL * _dataStoreBaseURL;
}

@property (nonatomic, readonly, copy) NSURL *archiveBaseURL;
@property (nonatomic, readonly) NSArray *archiveNames;
@property (nonatomic, readonly) NSArray *archives;
@property (nonatomic, readonly, copy) NSURL *dataStoreBaseURL;

- (void).cxx_destruct;
- (id)archiveBaseURL;
- (id)archiveDataStoreVersion:(unsigned long long)arg1 name:(id)arg2 options:(id)arg3 removeAfterSuccess:(bool)arg4 error:(out id*)arg5;
- (id)archiveDataStoreVersion:(unsigned long long)arg1 toURL:(id)arg2 options:(id)arg3 removeAfterSuccess:(bool)arg4 error:(out id*)arg5;
- (id)archiveForName:(id)arg1;
- (id)archiveNames;
- (id)archives;
- (id)dataStoreBaseURL;
- (bool)deleteArchive:(id)arg1 error:(out id*)arg2;
- (id)initWithDataStoreBaseURL:(id)arg1 archiveBaseURL:(id)arg2;
- (bool)markArchivesAsPurgable:(out id*)arg1;
- (bool)restoreArchive:(id)arg1 backupExistingDataStoreIfPossible:(bool)arg2 error:(out id*)arg3;

@end
