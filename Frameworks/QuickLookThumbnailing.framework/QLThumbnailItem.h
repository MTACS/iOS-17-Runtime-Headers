
@interface QLThumbnailItem : NSObject <NSSecureCoding> {
    UTType * _computedContentType;
    NSString * _computedContentTypeIdentifier;
    NSData * _data;
    unsigned long long  _downloadStatus;
    long long  _fileExtensionHandle;
    NSString * _fileExtensionToken;
    bool  _needsAccessToExternalResources;
    UTType * _overriddenContentType;
    NSString * _overriddenContentTypeIdentifier;
    NSURL * _url;
    FPSandboxingURLWrapper * _urlWrapperForExtension;
    FPSandboxingURLWrapper * _urlWrapperForParentDirectory;
}

@property (retain) UTType *computedContentType;
@property (copy) NSString *computedContentTypeIdentifier;
@property (nonatomic, readonly) UTType *contentType;
@property (readonly) NSData *data;
@property unsigned long long downloadStatus;
@property (nonatomic, readonly) unsigned long long itemType;
@property bool needsAccessToExternalResources;
@property (nonatomic, readonly) UTType *overriddenContentType;
@property (nonatomic, retain) NSString *overriddenContentTypeIdentifier;
@property (readonly) NSURL *url;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForExtension;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForParentDirectory;

// Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computedContentType;
- (id)computedContentTypeIdentifier;
- (void)consumeFileExtension;
- (id)contentType;
- (id)contentTypeIdentifier;
- (id)data;
- (void)dealloc;
- (unsigned long long)downloadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 URLWrapperForParentDirectory:(id)arg3;
- (void)issueFileExtension;
- (bool)needsAccessToExternalResources;
- (bool)needsDownload;
- (id)overriddenContentType;
- (id)overriddenContentTypeIdentifier;
- (void)provideURLWrapper:(id /* block */)arg1;
- (void)setComputedContentType:(id)arg1;
- (void)setComputedContentTypeIdentifier:(id)arg1;
- (void)setDownloadStatus:(unsigned long long)arg1;
- (void)setNeedsAccessToExternalResources:(bool)arg1;
- (void)setOverriddenContentTypeIdentifier:(id)arg1;
- (id)temporaryDirectoryInDaemonContainer;
- (id)url;
- (id)urlWrapperForExtension;
- (id)urlWrapperForParentDirectory;

// Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport

- (unsigned long long)itemType;

@end
