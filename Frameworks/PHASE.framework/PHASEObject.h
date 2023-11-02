
@interface PHASEObject : NSObject <NSCopying> {
    NSMutableSet * _children;
    PHASEEngine * _engine;
    struct Handle64 { 
        unsigned long long mData; 
    }  _geoEntityHandle;
    NSMutableArray * _geoShapeHandles;
    PHASEObject * _parent;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic, readonly, copy) NSArray *children;
@property (nonatomic, readonly) PHASEEngine *engine;
@property (nonatomic) struct Handle64 { unsigned long long x1; } geoEntityHandle;
@property (nonatomic, retain) NSMutableArray *geoShapeHandles;
@property (nonatomic) PHASEObject *parent;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldTransform;

+ (void)deRegisterSubTree:(id)arg1 engine:(id)arg2;
+ (void)forward;
+ (id)new;
+ (void)registerSubTree:(id)arg1 engine:(id)arg2;
+ (void)right;
+ (void)up;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_convertTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 fromObject:(id)arg2;
- (void)_storeTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (bool)addChild:(id)arg1 error:(id*)arg2;
- (id)children;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)engine;
- (struct Handle64 { unsigned long long x1; })geoEntityHandle;
- (id)geoShapeHandles;
- (id)init;
- (id)initWithEngine:(id)arg1;
- (id)initWithEngine:(id)arg1 entityType:(unsigned int)arg2 shapes:(id)arg3;
- (bool)isConnectedToRoot;
- (bool)isUnderTarget:(id)arg1;
- (id)parent;
- (void)removeChild:(id)arg1;
- (void)removeChildren;
- (void)setGeoEntityHandle:(struct Handle64 { unsigned long long x1; })arg1;
- (void)setGeoShapeHandles:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (bool)validateTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 outAffine:(void*)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTransform;

@end
