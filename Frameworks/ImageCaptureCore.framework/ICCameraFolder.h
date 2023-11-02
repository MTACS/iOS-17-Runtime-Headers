
@interface ICCameraFolder : ICCameraItem <ICMediaItemProtocol> {
    NSMutableArray * _files;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _folderMediaLock;
    NSMutableArray * _folders;
}

@property (nonatomic, readonly) NSArray *contents;
@property (retain) NSMutableArray *files;
@property struct os_unfair_lock_s { unsigned int x1; } folderMediaLock;
@property (retain) NSMutableArray *folders;

- (void)addFile:(id)arg1;
- (void)addFolder:(id)arg1;
- (id)contents;
- (void)dealloc;
- (void)deleteFile:(id)arg1;
- (void)deleteFileWithID:(unsigned long long)arg1;
- (void)deleteFolder:(id)arg1;
- (void)deleteFolderWithID:(unsigned long long)arg1;
- (void)deleteItem:(id)arg1;
- (id)description;
- (id)files;
- (struct os_unfair_lock_s { unsigned int x1; })folderMediaLock;
- (id)folders;
- (id)getFileWithID:(unsigned long long)arg1;
- (id)getFolderWithID:(unsigned long long)arg1;
- (bool)hasThumbnail;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (struct CGImage { }*)largeThumbnailIfAvailable;
- (id)mediaItemType;
- (id)metadataIfAvailable;
- (void)setFiles:(id)arg1;
- (void)setFolderMediaLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setFolders:(id)arg1;
- (struct CGImage { }*)thumbnailIfAvailable;
- (id)valueForUndefinedKey:(id)arg1;

@end
