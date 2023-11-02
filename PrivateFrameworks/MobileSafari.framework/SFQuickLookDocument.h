
@interface SFQuickLookDocument : NSObject {
    LSDocumentProxy * _documentProxy;
    <SFQuickLookDocumentSource> * _documentSource;
    NSString * _fileName;
    NSString * _mimeType;
    bool  _needsQuickLookDocumentView;
    NSString * _savedPath;
    NSString * _savedPathWithProperExtension;
    bool  _shouldDeleteSavedPath;
    bool  _shouldDeleteSavedPathWithProperExtension;
    NSURL * _sourceURL;
    NSString * _uti;
}

@property (nonatomic, readonly) LSDocumentProxy *documentProxy;
@property (nonatomic) <SFQuickLookDocumentSource> *documentSource;
@property (nonatomic, readonly, copy) NSString *fileName;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly, copy) NSString *inferredUTI;
@property (nonatomic, readonly, copy) NSString *localizedType;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (nonatomic, readonly) bool needsQuickLookDocumentView;
@property (nonatomic, readonly, copy) NSString *savedPath;
@property (nonatomic, readonly, copy) NSString *savedPathWithProperExtension;
@property (nonatomic, readonly, copy) NSURL *savedURLWithProperExtension;
@property (nonatomic, readonly) bool shouldUnzipByUIDocumentInteractionController;
@property (nonatomic, retain) NSURL *sourceURL;
@property (nonatomic, readonly, copy) NSString *uti;

+ (bool)_hasSuitableApplicationForOpeningDocument:(id)arg1;
+ (id)properFilenameForOriginalFilename:(id)arg1 typeIdentifier:(id)arg2 mimeType:(id)arg3 sourceURL:(id)arg4;

- (void).cxx_destruct;
- (void)_deleteSavedPathIfNecessary;
- (void)_deleteSavedPathWithProperExtensionIfNecessary;
- (void)addQuickLookPrintSettingsToPrintInfo:(id)arg1;
- (void)dealloc;
- (id)documentProxy;
- (id)documentSource;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)inferredUTI;
- (id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(bool)arg4;
- (id)localizedType;
- (id)mimeType;
- (bool)needsQuickLookDocumentView;
- (void)saveToFileIfNeeded;
- (id)savedPath;
- (id)savedPathWithProperExtension;
- (id)savedURLWithProperExtension;
- (void)setDocumentSource:(id)arg1;
- (void)setFileNameForPDFDocument:(id)arg1;
- (void)setSavedPath:(id)arg1 shouldDelete:(bool)arg2;
- (void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(bool)arg2;
- (void)setSourceURL:(id)arg1;
- (bool)shouldUnzipByUIDocumentInteractionController;
- (id)sourceURL;
- (id)uti;

@end
