
@interface PLFileSystemBookmark : PLManagedObject

@property (nonatomic, retain) NSData *bookmarkData;
@property (nonatomic, retain) NSString *pathRelativeToVolume;
@property (nonatomic, retain) PLInternalResource *resource;

+ (id)entityName;
+ (id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2;

- (id)fileSystemURL;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (bool)supportsCloudUpload;

@end
