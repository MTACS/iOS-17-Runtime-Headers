
@interface PLAssetsdCrashRecoverySupport : NSObject {
    PLPhotoLibraryPathManager * _pathManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _recoveryIndicatorCheckLock;
    NSDate * _recoveryJobCreationDate;
}

- (void).cxx_destruct;
- (void)_enqeueRecoveryJob:(id)arg1 date:(id)arg2 toImageWriter:(id)arg3;
- (id)initWithPathManager:(id)arg1;
- (bool)isSafeToRecoverAfterCrash;
- (void)recoverFromCrashIfNeededWithImageWriter:(id)arg1;

@end
