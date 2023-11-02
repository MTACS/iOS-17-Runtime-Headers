
@interface PLFileSystemCapabilities : NSObject {
    NSError * _error;
    BOOL  _fstypename;
    unsigned int  _interfacesCapabilities;
    bool  _isInternalVolume;
    bool  _isLocalVolume;
    bool  _isReadOnly;
    bool  _isRootFileSystemVolume;
    bool  _isValid;
    unsigned int  _nativeCommonAttributes;
    bool  _supportsDataProtection;
}

@property (readonly) NSError *error;
@property (readonly) NSString *fileSystemTypeName;
@property (readonly) bool isCentralizedCacheDeleteCapable;
@property (readonly) bool isCloneCapable;
@property (getter=isGenCountCapable, readonly) bool isCloudPhotoLibraryCapable;
@property (getter=isWholeFileLockCapable, readonly) bool isCoreDataCapable;
@property (readonly) bool isGenCountCapable;
@property (readonly) bool isInternalVolume;
@property (readonly) bool isLocalVolume;
@property (readonly) bool isNetworkVolume;
@property (readonly) bool isReadOnly;
@property (readonly) bool isRootFileSystemVolume;
@property (readonly) bool isSecludeRenameCapable;
@property (readonly) bool isValid;
@property (readonly) bool isWholeFileLockCapable;
@property (readonly) bool supportsDataProtection;

+ (id)capabilitiesWithURL:(id)arg1;
+ (unsigned long long)minimumAvailableBytesRequiredForLibraryOpen;

- (void).cxx_destruct;
- (id)description;
- (bool)determineCapabilitiesWithURL:(id)arg1 error:(id*)arg2;
- (id)error;
- (id)fileSystemTypeName;
- (bool)isCentralizedCacheDeleteCapable;
- (bool)isCloneCapable;
- (bool)isGenCountCapable;
- (bool)isInternalVolume;
- (bool)isLocalVolume;
- (bool)isNetworkVolume;
- (bool)isReadOnly;
- (bool)isRootFileSystemVolume;
- (bool)isSecludeRenameCapable;
- (bool)isValid;
- (bool)isWholeFileLockCapable;
- (bool)supportsDataProtection;

@end
