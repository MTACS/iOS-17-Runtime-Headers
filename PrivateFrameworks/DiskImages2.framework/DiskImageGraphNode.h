
@interface DiskImageGraphNode : NSObject {
    NSUUID * _UUID;
    NSMutableArray * _children;
    NSURL * _filePath;
    bool  _isCache;
    NSDictionary * _metadata;
    DiskImageGraphNode * _parent;
    NSUUID * _parentUUID;
    NSMutableDictionary * _pstackDict;
    NSString * _tag;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, retain) NSURL *filePath;
@property (nonatomic) bool isCache;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, retain) DiskImageGraphNode *parent;
@property (nonatomic, retain) NSUUID *parentUUID;
@property (nonatomic, retain) NSMutableDictionary *pstackDict;
@property (nonatomic, retain) NSString *tag;

+ (bool)validateWithDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (void)addDecendantsToArray:(id)arg1;
- (id)children;
- (bool)deleteImage;
- (id)filePath;
- (id)getDescendants;
- (id)initWithDictionary:(id)arg1 updateChangesToDict:(bool)arg2 workDir:(id)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 tag:(id)arg2 UUID:(id)arg3 parentUUID:(id)arg4 metadata:(id)arg5 isCache:(bool)arg6;
- (bool)isCache;
- (id)metadata;
- (id)parent;
- (id)parentUUID;
- (id)pstackDict;
- (void)setChildren:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setIsCache:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentUUID:(id)arg1;
- (void)setPstackDict:(id)arg1;
- (void)setTag:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)tag;
- (id)toDictionary;

@end
