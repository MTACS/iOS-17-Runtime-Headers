
@interface HDHFDataStore : NSObject {
    <HDHFDataStoreDelegate> * _delegate;
    struct shared_ptr<health::VirtualFilesystem> { 
        struct VirtualFilesystem {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fileSystem;
    NSString * _fileSystemPath;
    _Atomic bool  _hasOpenStore;
    struct shared_ptr<health::DataStore> { 
        struct DataStore {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _highFrequencyDataStore;
    _Atomic bool  _invalidated;
    bool  _isOpen;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _openAttempt;
    NSObject<OS_dispatch_queue> * _openQueue;
}

@property (nonatomic) <HDHFDataStoreDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *fileSystemPath;
@property (nonatomic) bool isOpen;
@property (nonatomic, readonly) long long rebuildState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_createNewStore:(id*)arg1;
- (bool)accessStoreWithError:(id*)arg1 block:(id /* block */)arg2;
- (struct unique_ptr<health::DataStore, std::default_delete<health::DataStore>> { struct __compressed_pair<health::DataStore *, std::default_delete<health::DataStore>> { struct DataStore {} *x_1_1_1; } x1; })dataStoreAtURL:(id)arg1 filesystem:(const void*)arg2 allowCheckpoint:(bool)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)delegate;
- (bool)deleteHFDAt:(id)arg1 error:(id*)arg2;
- (long long)deleteSQLiteMigrationArchive:(id*)arg1;
- (id)description;
- (id)diagnosticDescription;
- (bool)discardStoreWithError:(id*)arg1;
- (id)fileManager;
- (id)fileSystemPath;
- (void)flushForInvalidation:(bool)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 fileSystem:(struct shared_ptr<health::VirtualFilesystem> { struct VirtualFilesystem {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (bool)isOpen;
- (bool)moveHFDAsideWithoutOverwritingFrom:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (long long)rebuildState;
- (long long)rebuildWithTransaction:(id)arg1 error:(id*)arg2;
- (void)requestHFDToSQLiteMigration;
- (void)setDelegate:(id)arg1;
- (void)setIsOpen:(bool)arg1;
- (long long)unitTest_rebuildState;
- (void)unitTest_requestMigrationToSQLite;
- (void)unitTest_requestRebuild;
- (void)unitTest_resetRebuildState;

@end
