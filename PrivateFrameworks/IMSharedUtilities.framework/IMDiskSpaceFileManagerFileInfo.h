
@interface IMDiskSpaceFileManagerFileInfo : IMDiskSpaceFileInfo {
    unsigned long long  _purgableFlags;
    NSString * _purgableFlagsString;
}

@property (nonatomic, readonly) unsigned long long purgableFlags;
@property (nonatomic, readonly) NSString *purgableFlagsString;

- (void).cxx_destruct;
- (void)addLogItems:(id)arg1;
- (id)initWithPath:(id)arg1 fileSize:(struct IMFileSize { unsigned long long x1; unsigned long long x2; })arg2 isDirectory:(bool)arg3 isAttachment:(bool)arg4 isSyncAsset:(bool)arg5 isSticker:(bool)arg6 purgableFlags:(unsigned long long)arg7;
- (unsigned long long)purgableFlags;
- (id)purgableFlagsString;

@end
