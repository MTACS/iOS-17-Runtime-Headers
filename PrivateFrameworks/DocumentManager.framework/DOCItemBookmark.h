
@interface DOCItemBookmark : NSObject <NSSecureCoding> {
    NSString * _bookmarkableString;
    UTType * _contentType;
    FPItem * _fileProviderItem;
    NSURL * _fileURL;
    bool  _needsToBeImported;
    FPSandboxingURLWrapper * _wrapper;
}

@property (retain) NSString *bookmarkableString;
@property (nonatomic, copy) UTType *contentType;
@property (retain) FPItem *fileProviderItem;
@property (nonatomic, copy) NSURL *fileURL;

+ (id)_contentTypeForURL:(id)arg1;
+ (void)_fetchDocumentURLFromBookmarkableString:(id)arg1 completion:(id /* block */)arg2;
+ (id)_wrapperForURL:(id)arg1 error:(id*)arg2;
+ (id)documentsURLsForItemBookmarks:(id)arg1;
+ (bool)isAnyFPItemAFault:(id)arg1;
+ (bool)isAnyItemBookmarkAFault:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmarkableString;
- (id)contentType;
- (void)convertAndCopyURLToInbox:(id)arg1 ofType:(id)arg2 conversionRules:(id)arg3 completion:(id /* block */)arg4;
- (id)coordinatedFileURL;
- (void)copyURLToInbox:(id)arg1 completion:(id /* block */)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderItem;
- (id)fileURL;
- (id)initWithBookmarkableString:(id)arg1 fileProviderItem:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 fileProviderItem:(id)arg2;
- (bool)needsToBeImported;
- (void)prepareForMode:(unsigned long long)arg1 usingBookmark:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)prepareForMode:(unsigned long long)arg1 usingBookmark:(bool)arg2 shouldConvert:(bool)arg3 conversionRules:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setBookmarkableString:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setFileProviderItem:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setNeedsToBeImported:(bool)arg1;

@end
