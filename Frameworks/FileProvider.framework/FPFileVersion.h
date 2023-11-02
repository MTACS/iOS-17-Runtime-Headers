
@interface FPFileVersion : NSObject <NSSecureCoding> {
    NSString * _displayName;
    FPItemID * _fpItemIdentifier;
    bool  _hasThumbnail;
    NSPersonNameComponents * _lastEditorNameComponents;
    NSDate * _modificationDate;
    int  _notifyToken;
    NSURL * _originalURL;
    unsigned long long  _size;
    NSObject<GSAdditionStoring> * _storage;
    NSURL * _url;
    NSFileProviderItemVersion * _version;
    FPSandboxingURLWrapper * _wrapper;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic, readonly) FPItemID *fpItemIdentifier;
@property (nonatomic) bool hasThumbnail;
@property (nonatomic, readonly, copy) NSString *lastEditorDeviceName;
@property (nonatomic, readonly) NSString *lastEditorFormattedName;
@property (nonatomic, readonly, copy) NSPersonNameComponents *lastEditorNameComponents;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly, copy) NSURL *originalURL;
@property (nonatomic, readonly) <NSCopying><NSSecureCoding> *persistentIdentifier;
@property (nonatomic, readonly, copy) NSURL *physicalURL;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, retain) NSObject<GSAdditionStoring> *storage;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly, copy) NSFileProviderItemVersion *version;

+ (id)etagForVersion:(id)arg1 identifier:(id)arg2;
+ (id)gsNamespace;
+ (id)parseEtag:(id)arg1;
+ (id)parseInfoFromVersionURL:(id)arg1 domainIdentifier:(id*)arg2 fpItemIdentifier:(id*)arg3 etag:(id*)arg4;
+ (id)storagePrefixForOriginalURL:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)versionFaultName:(id)arg1 identifier:(id)arg2 ext:(id)arg3;

- (void).cxx_destruct;
- (void)checkThumbnailChanged;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)etag;
- (id)fetchGSURLForNamespace:(id)arg1;
- (id)fpItemIdentifier;
- (bool)hasThumbnail;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 displayName:(id)arg2 originalURL:(id)arg3 physicalURL:(id)arg4 identifier:(id)arg5 modificationDate:(id)arg6 lastEditorNameComponents:(id)arg7 size:(id)arg8;
- (id)lastEditorDeviceName;
- (id)lastEditorFormattedName;
- (id)lastEditorNameComponents;
- (id)modificationDate;
- (id)originalURL;
- (id)persistentIdentifier;
- (id)physicalURL;
- (void)registerThumbnailNotification;
- (void)setHasThumbnail:(bool)arg1;
- (void)setStorage:(id)arg1;
- (unsigned long long)size;
- (id)storage;
- (id)url;
- (id)version;

@end
