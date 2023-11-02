
@interface IMDiskSpaceFileInfo : NSObject {
    NSString * _fileExtension;
    struct IMFileSize { 
        unsigned long long file_size; 
        unsigned long long disk_allocation_size; 
    }  _fileSize;
    NSString * _guid;
    bool  _isAttachment;
    bool  _isDirectory;
    bool  _isPurgableOnDisk;
    bool  _isSticker;
    bool  _isSyncAsset;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *fileExtension;
@property (nonatomic, readonly) struct IMFileSize { unsigned long long x1; unsigned long long x2; } fileSize;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) bool isAttachment;
@property (nonatomic, readonly) bool isDirectory;
@property (nonatomic, readonly) bool isPurgableOnDisk;
@property (nonatomic, readonly) bool isSticker;
@property (nonatomic, readonly) bool isSyncAsset;
@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (void)addLogItems:(id)arg1;
- (id)fileExtension;
- (struct IMFileSize { unsigned long long x1; unsigned long long x2; })fileSize;
- (id)guid;
- (id)initWithPath:(id)arg1 fileSize:(struct IMFileSize { unsigned long long x1; unsigned long long x2; })arg2 isDirectory:(bool)arg3 isAttachment:(bool)arg4 isSyncAsset:(bool)arg5 isSticker:(bool)arg6 isPurgableOnDisk:(bool)arg7;
- (bool)isAttachment;
- (bool)isDirectory;
- (bool)isPurgableOnDisk;
- (bool)isSticker;
- (bool)isSyncAsset;
- (void)log;
- (id)logString;
- (id)path;

@end
