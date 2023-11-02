
@interface DiskImageGraph : NSObject {
    DiskImageGraphNode * _activeNode;
    NSMutableArray * _imagesDictsArray;
    bool  _imported;
    NSMutableDictionary * _nodes;
    NSMutableDictionary * _pstackDB;
    NSURL * _pstackURL;
}

@property (nonatomic, retain) DiskImageGraphNode *activeNode;
@property (nonatomic, retain) NSMutableArray *imagesDictsArray;
@property (nonatomic) bool imported;
@property (nonatomic, retain) NSMutableDictionary *nodes;
@property (nonatomic, readonly, retain) NSMutableDictionary *pstackDB;
@property (nonatomic, readonly, copy) NSURL *pstackURL;

+ (bool)copyDictNodesToFolder:(id)arg1 dict:(id)arg2 error:(id*)arg3;
+ (bool)createNodesConnectivityWithNodesDict:(id)arg1 error:(id*)arg2;
+ (id)createPstackDictWithNode:(id)arg1;
+ (id)getImageUUIDWithURL:(id)arg1 error:(id*)arg2;
+ (id)getRelativeIfContainedWithChildURL:(id)arg1 parentURL:(id)arg2;
+ (bool)loadPlistDictFromURL:(id)arg1 errorNotPstack:(bool)arg2 isPstack:(bool*)arg3 dict:(id*)arg4 error:(id*)arg5;
+ (bool)populateNodesDictsWithArray:(id)arg1 pstackURL:(id)arg2 nodesDict:(id)arg3 isTopLevelPstack:(bool)arg4 error:(id*)arg5;
+ (bool)saveToPlistWithDictionary:(id)arg1 URL:(id)arg2 error:(id*)arg3;
+ (bool)validateWithDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)activeNode;
- (bool)appendWithURL:(id)arg1 isCache:(bool)arg2 tag:(id)arg3 setNewActive:(bool)arg4 error:(id*)arg5;
- (bool)appendWithURL:(id)arg1 isCache:(bool)arg2 tag:(id)arg3 toNode:(id)arg4 setNewActive:(bool)arg5 error:(id*)arg6;
- (bool)cloneToURL:(id)arg1 error:(id*)arg2;
- (id)getImageWithTag:(id)arg1 error:(id*)arg2;
- (id)imagesDictsArray;
- (bool)imported;
- (id)initWithBaseImageURL:(id)arg1 newPstackURL:(id)arg2 tag:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 pstackURL:(id)arg2 imported:(bool)arg3 error:(id*)arg4;
- (id)initWithPstackURL:(id)arg1 error:(id*)arg2;
- (id)initWithPstackURL:(id)arg1 imported:(bool)arg2 error:(id*)arg3;
- (bool)loadImportedNodesWithError:(id*)arg1;
- (id)nodes;
- (id)pstackDB;
- (id)pstackURL;
- (bool)removeNodeWithTag:(id)arg1 recursive:(bool)arg2 error:(id*)arg3;
- (bool)removeNodeWithUUID:(id)arg1 recursive:(bool)arg2 error:(id*)arg3;
- (bool)removeWithNode:(id)arg1 recursive:(bool)arg2 error:(id*)arg3;
- (bool)savePstackWithError:(id*)arg1;
- (void)setActiveNode:(id)arg1;
- (bool)setActiveNodeWithTag:(id)arg1 error:(id*)arg2;
- (bool)setActiveNodeWithUUID:(id)arg1 error:(id*)arg2;
- (void)setImagesDictsArray:(id)arg1;
- (void)setImported:(bool)arg1;
- (void)setNodes:(id)arg1;

@end
