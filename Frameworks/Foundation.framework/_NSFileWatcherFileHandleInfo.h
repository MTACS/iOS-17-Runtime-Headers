
@interface _NSFileWatcherFileHandleInfo : NSObject {
    bool  closed;
    int  fileHandle;
}

@property (readonly) bool isDirectory;

+ (id)openFileWithPath:(id)arg1;

- (void)close;
- (void)dealloc;
- (id)description;
- (bool)isDirectory;
- (bool)verifyAccessByAuditToken:(struct { unsigned int x1[8]; })arg1;

@end
