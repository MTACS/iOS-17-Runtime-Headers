
@interface GKGridGraph : GKGraph {
    void * _cGridGraph;
    bool  _diagonalsAllowed;
}

@property (nonatomic, readonly) bool diagonalsAllowed;
@property (nonatomic, readonly) unsigned long long gridHeight;
@property (nonatomic, readonly) void gridOrigin;
@property (nonatomic, readonly) unsigned long long gridWidth;

+ (id)graphFromGridStartingAt:(void *)arg1 width:(void *)arg2 height:(void *)arg3 diagonalsAllowed:(void *)arg4; // needs 4 arg types, found 3: int, int, bool
+ (id)graphFromGridStartingAt:(void *)arg1 width:(void *)arg2 height:(void *)arg3 diagonalsAllowed:(void *)arg4 nodeClass:(void *)arg5; // needs 5 arg types, found 4: int, int, bool, Class
+ (bool)supportsSecureCoding;

- (void*)cGridGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeToAdjacentNodes:(id)arg1;
- (bool)diagonalsAllowed;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)gridHeight;
- (void)gridOrigin;
- (unsigned long long)gridWidth;
- (id)initFromGridStartingAt:(void *)arg1 width:(void *)arg2 height:(void *)arg3 diagonalsAllowed:(void *)arg4; // needs 4 arg types, found 3: int, int, bool
- (id)initFromGridStartingAt:(void *)arg1 width:(void *)arg2 height:(void *)arg3 diagonalsAllowed:(void *)arg4 nodeClass:(void *)arg5; // needs 5 arg types, found 4: int, int, bool, Class
- (id)initWithCoder:(id)arg1;
- (void*)makeCGraph;
- (id)nodeAtGridPosition;
- (id)nodeAtGridPositionNoNilCheck;
- (void)removeNodes:(id)arg1;

@end
