
@interface PFClientSideEncryptionManager : NSObject {
    bool  _isReady;
    NSData * _keyData;
    NSDictionary * _keyMetadata;
    NSString * _keychainAccessGroup;
    NSString * _keychainApplicationLabel;
    NSString * _keychainViewHint;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _logHandle;
    unsigned long long  _state;
}

@property (readonly) bool isReady;

- (void).cxx_destruct;
- (void)archiveDirectoryAtURL:(id)arg1 toOutputURL:(id)arg2 dataType:(long long)arg3 options:(id)arg4 entryPredicate:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)configurationForProfile:(id)arg1;
- (bool)createKeychainEntryReturningKeyData:(id*)arg1 keyInfo:(id*)arg2;
- (bool)findExistingKeychainEntryReturningKeyData:(id*)arg1 keyInfo:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (bool)isReady;
- (void)shutdownWithCompletionHandler:(id /* block */)arg1;
- (void)start;
- (bool)unarchiveDirectoryAtURL:(id)arg1 error:(id*)arg2;

@end
