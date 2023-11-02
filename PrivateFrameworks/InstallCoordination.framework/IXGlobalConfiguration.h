
@interface IXGlobalConfiguration : NSObject {
    unsigned int  _daemonGID;
    unsigned int  _daemonUID;
    NSURL * _daemonUserHome;
    NSURL * _dataStorageHome;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dynamicPropertyLock;
    NSURL * _rootPath;
}

@property (nonatomic, readonly) unsigned int daemonGID;
@property (nonatomic, readonly) unsigned int daemonUID;
@property (nonatomic, readonly) NSURL *daemonUserHome;
@property (nonatomic, readonly) NSURL *dataStorageHome;
@property (nonatomic, readonly) NSURL *frameworkURL;
@property (nonatomic, readonly) NSURL *rootPath;
@property (nonatomic, readonly) NSURL *userVolumeURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_dataStorageHomeURLWithError:(id*)arg1;
- (void)createDirectories;
- (unsigned int)daemonGID;
- (unsigned int)daemonUID;
- (id)daemonUserHome;
- (id)dataDirectoryAbortingOnError;
- (id)dataDirectoryWithError:(id*)arg1;
- (id)dataStorageHome;
- (id)extractedInstallableStagingDirectory:(id*)arg1;
- (id)frameworkURL;
- (id)init;
- (id)promiseStagingRootDirectoryAbortingOnError;
- (id)promiseStagingRootDirectoryWithError:(id*)arg1;
- (id)remoteInstallationStagingDirectory:(id*)arg1;
- (id)removabilityDirectoryAbortingOnError;
- (id)removabilityDirectoryWithError:(id*)arg1;
- (id)rootPath;
- (id)userVolumeURL;

@end
