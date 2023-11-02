
@interface IMDirectoryContentsSizes : NSObject {
    struct IMFileSize { 
        unsigned long long file_size; 
        unsigned long long disk_allocation_size; 
    }  _totalAttachmentSize;
    struct IMFileSize { 
        unsigned long long file_size; 
        unsigned long long disk_allocation_size; 
    }  _totalPurgableSize;
    struct IMFileSize { 
        unsigned long long file_size; 
        unsigned long long disk_allocation_size; 
    }  _totalSize;
}

@property (nonatomic, readonly) struct IMFileSize { unsigned long long x1; unsigned long long x2; } totalAttachmentSize;
@property (nonatomic, readonly) struct IMFileSize { unsigned long long x1; unsigned long long x2; } totalPurgableSize;
@property (nonatomic, readonly) struct IMFileSize { unsigned long long x1; unsigned long long x2; } totalSize;

- (id)initWithDirectoryContents:(id)arg1;
- (struct IMFileSize { unsigned long long x1; unsigned long long x2; })totalAttachmentSize;
- (struct IMFileSize { unsigned long long x1; unsigned long long x2; })totalPurgableSize;
- (struct IMFileSize { unsigned long long x1; unsigned long long x2; })totalSize;

@end
