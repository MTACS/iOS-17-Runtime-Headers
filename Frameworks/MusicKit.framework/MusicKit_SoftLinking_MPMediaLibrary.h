
@interface MusicKit_SoftLinking_MPMediaLibrary : NSObject {
    NSOperationQueue * _operationQueue;
    MPMediaLibrary * _underlyingMediaLibrary;
}

@property (nonatomic, readonly) float connectionProgress;
@property (nonatomic, readonly) bool isHomeSharingLibrary;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (void)_handleAvailableLibrariesDidChangeNotification:(id)arg1;
+ (id)availableMediaLibrariesDidChangeNotificationName;
+ (void)beginDiscoveringMediaLibraries;
+ (id)deviceLibrary;
+ (void)endDiscoveringMediaLibraries;
+ (id)libraryConnectionProgressDidChangeNotificationName;
+ (id)libraryDidChangeNotificationName;
+ (id)libraryDynamicPropertiesDidChangeNotificationName;
+ (id)libraryStatusDidChangeNotificationName;
+ (id)sharedLibraries;

- (void).cxx_destruct;
- (void)_handleLibraryConnectionProgressDidChangeNotification:(id)arg1;
- (void)_handleLibraryDidChangeNotification:(id)arg1;
- (void)_handleLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_handleLibraryStatusDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingMediaLibrary:(id)arg1;
- (id)_underlyingMediaLibrary;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (float)connectionProgress;
- (void)dealloc;
- (void)disconnect;
- (long long)downloadSizeForModelObject:(id)arg1 includingNonLibraryContent:(bool)arg2;
- (void)endGeneratingLibraryChangeNotifications;
- (unsigned long long)hash;
- (id)initWithUnderlyingMediaLibrary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHomeSharingLibrary;
- (id)name;
- (void)performOperation:(id)arg1;
- (void)sdk_addItemToLibraryWithStoreID:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)status;
- (id)uniqueIdentifier;

@end
