
@interface FPActionOperationLocator : NSObject <NSCopying, NSSecureCoding> {
    NSObject * _object;
}

@property (nonatomic, readonly) FPItem *asFPItem;
@property (nonatomic, readonly) NSURL *asURL;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) id identifier;
@property (nonatomic, readonly) bool isDownloaded;
@property (nonatomic, readonly) bool isExternalURL;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) bool isProviderItem;
@property (nonatomic, readonly) id parentIdentifier;
@property (nonatomic, readonly) bool requiresCrossDeviceCopy;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) id underlyingObject;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)locatorForItem:(id)arg1;
+ (id)locatorForURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setObject:(id)arg1;
- (id)asFPItem;
- (id)asURL;
- (void)attachSandboxExtensionOnXPCEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filename;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isDownloaded;
- (bool)isEqual:(id)arg1;
- (bool)isExternalURL;
- (bool)isFolder;
- (bool)isProviderItem;
- (id)parentIdentifier;
- (bool)requiresCrossDeviceCopy;
- (unsigned long long)size;
- (id)underlyingObject;

// Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon

- (void)annotateWithPersonaSandboxIfNeeded:(id)arg1;
- (bool)isDownloaded;
- (unsigned long long)materializeOptionForDestinationItem:(id)arg1 recursively:(bool)arg2 isCopy:(bool)arg3 extensionManager:(id)arg4;
- (id)materializedURLWithDomain:(id)arg1;
- (id)materializedURLWithExtensionManager:(id)arg1;
- (id)startAccessingLocator;
- (bool)willRequireDownloadForSourceItem:(id)arg1 extensionManager:(id)arg2;

@end
