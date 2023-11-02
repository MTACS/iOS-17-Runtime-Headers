
@interface OZCopyFootageInfo : NSObject {
    NSMutableDictionary * _associatedFilesSourceDestPaths;
    NSURL * _destinationURL;
    NSSet * _nodeIDs;
    void * _scene;
    unsigned long long  _sizeInBytes;
    bool  _sizeIsValid;
    NSURL * _sourceURL;
}

@property (nonatomic, retain) NSMutableDictionary *associatedFilesSourceDestPaths;
@property (nonatomic, retain) NSURL *destinationURL;
@property (nonatomic, retain) NSSet *nodeIDs;
@property (nonatomic) void*scene;
@property (nonatomic) unsigned long long sizeInBytes;
@property (nonatomic) bool sizeIsValid;
@property (nonatomic, retain) NSURL *sourceURL;

+ (unsigned long long)fileCount:(id)arg1;
+ (id)fileURLToFootageInfoMap:(void*)arg1 includeUnused:(bool)arg2 destination:(id)arg3;
+ (id)fileURLsForNode:(void*)arg1;
+ (void)reconnectFootage:(id)arg1 scene:(void*)arg2;
+ (unsigned long long)totalSizeInBytes:(id)arg1 forceUpdate:(bool)arg2;
+ (void)updateSizes:(id)arg1 forceUpdate:(bool)arg2;

- (id)associatedFilesSourceDestPaths;
- (void)dealloc;
- (id)destinationURL;
- (id)nodeIDs;
- (void*)scene;
- (void)setAssociatedFilesSourceDestPaths:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setNodeIDs:(id)arg1;
- (void)setScene:(void*)arg1;
- (void)setSizeInBytes:(unsigned long long)arg1;
- (void)setSizeIsValid:(bool)arg1;
- (void)setSourceURL:(id)arg1;
- (unsigned long long)sizeInBytes;
- (bool)sizeIsValid;
- (id)sourceURL;
- (bool)updateSize:(bool)arg1 error:(id*)arg2;

@end
