
@interface ML3MusicLibraryResourcesManagerContext : NSObject {
    <MLMediaLibraryAccountChangeObserver> * _accountChangeObserver;
    <_MSVAccountInformationProviding> * _accountInfo;
    NSString * _libraryContainerIdentifier;
    bool  _multiUserSupported;
    <MLMediaLibraryResourcesServiceProtocol> * _resourcesService;
    bool  _runningInDaemon;
}

@property (nonatomic, readonly) <MLMediaLibraryAccountChangeObserver> *accountChangeObserver;
@property (nonatomic, readonly) <_MSVAccountInformationProviding> *accountInfo;
@property (nonatomic, readonly) NSString *libraryContainerIdentifier;
@property (getter=isMultiUserSupported, nonatomic, readonly) bool multiUserSupported;
@property (nonatomic, readonly) <MLMediaLibraryResourcesServiceProtocol> *resourcesService;
@property (getter=isRunningInDaemon, nonatomic, readonly) bool runningInDaemon;

+ (id)contextForAutoupdatingSharedLibrary;
+ (id)contextForMultiUserDaemonLibraryWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2;
+ (id)contextForMultiUserFrameworkLibraryWithService:(id)arg1;
+ (id)contextForSingleUserLibraryWithAccountInfo:(id)arg1;
+ (id)contextForSingleUserLibraryWithLibraryContainerIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithResourcesService:(id)arg1 accountInfo:(id)arg2 libraryContainerIdentifier:(id)arg3 accountChangeObserver:(id)arg4 supportsMultiUsers:(bool)arg5 runningInDaemon:(bool)arg6;
- (id)accountChangeObserver;
- (id)accountInfo;
- (bool)isMultiUserSupported;
- (bool)isRunningInDaemon;
- (id)libraryContainerIdentifier;
- (id)resourcesService;

@end
