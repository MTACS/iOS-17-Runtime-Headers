
@interface FigCaptureTrie : NSObject {
    bool  _complete;
    NSMutableDictionary * _subTries;
}

@property (nonatomic, readonly) NSDictionary *children;
@property (getter=isComplete, nonatomic, readonly) bool complete;

- (void)_addPath:(id)arg1 index:(unsigned long long)arg2;
- (void)_enumeratePathsWithPrefix:(id)arg1 stop:(bool*)arg2 processLeaf:(id /* block */)arg3;
- (id)_extractFrom:(id)arg1 writeTarget:(id)arg2 destinationMutability:(int)arg3 overwrite:(bool)arg4;
- (void)addPath:(id)arg1;
- (id)children;
- (bool)containsParentPath:(id)arg1;
- (bool)containsPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumeratePaths:(id /* block */)arg1;
- (id)extractFrom:(id)arg1;
- (void)extractFrom:(id)arg1 writeInto:(id)arg2 assumeMutable:(bool)arg3 overwrite:(bool)arg4;
- (id)generatePathArray;
- (id)getSubTrie:(id)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPathArray:(id)arg1;
- (bool)isComplete;
- (bool)isEqual:(id)arg1;

@end
