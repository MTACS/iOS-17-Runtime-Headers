
@interface PFUbiquitySafeSaveFile : NSObject {
    bool  _continueCheckingDownload;
    bool  _continueCheckingUpload;
    PFUbiquityLocation * _currentLocation;
    NSError * _downloadError;
    bool  _downloadSuccess;
    bool  _isRegistered;
    NSString * _localPeerID;
    bool  _moveAfterSave;
    PFUbiquityLocation * _permanentLocation;
    NSError * _safeSaveError;
    PFUbiquityLocation * _safeSaveLocation;
    NSObject<OS_dispatch_semaphore> * _safeSaveSemaphore;
    bool  _safeSaveSuccess;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (bool)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (bool)moveToPermanentLocation:(id*)arg1;
- (bool)waitForFileToUpload:(id*)arg1;
- (bool)writeFileToLocation:(id)arg1 error:(id*)arg2;

@end
