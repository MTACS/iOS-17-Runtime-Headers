
@interface FPURLOperationLocator : FPActionOperationLocator {
    bool  _attachSandboxExtensionOnXPCEncoding;
    long long  _size;
}

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (bool)supportsSecureCoding;

- (void)attachSandboxExtensionOnXPCEncoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filename;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isDownloaded;
- (bool)isExternalURL;
- (bool)isFolder;
- (id)parentIdentifier;
- (bool)requiresCrossDeviceCopy;
- (unsigned long long)size;

// Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon

- (void)annotateWithPersonaSandboxIfNeeded:(id)arg1;
- (id)startAccessingLocator;

@end
