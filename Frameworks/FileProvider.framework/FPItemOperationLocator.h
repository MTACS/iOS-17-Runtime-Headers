
@interface FPItemOperationLocator : FPActionOperationLocator

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (bool)supportsSecureCoding;

- (id)description;
- (id)filename;
- (id)identifier;
- (bool)isDownloaded;
- (bool)isFolder;
- (bool)isMaterializedOnDisk;
- (bool)isProviderItem;
- (id)parentIdentifier;
- (bool)requiresCrossDeviceCopy;
- (unsigned long long)size;

// Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon

- (void)annotateWithPersonaSandboxIfNeeded:(id)arg1;
- (id)startAccessingLocator;

@end
