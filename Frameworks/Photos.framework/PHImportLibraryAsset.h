
@interface PHImportLibraryAsset : PHImportAsset {
    bool  _isPenultimate;
}

+ (bool)isValidAsSidecar:(id)arg1;

- (bool)canDelete;
- (bool)canReference;
- (void)configureSidecarTypeForExtension:(id)arg1;
- (id)initWithSource:(id)arg1 url:(id)arg2 type:(id)arg3 supportedMediaType:(unsigned char)arg4 uuid:(id)arg5;
- (bool)isBase;
- (bool)isRender;
- (bool)isSidecar;
- (id)makeImportIdentifier;
- (id)nameKey;
- (bool)shouldPreserveUUID;

@end
