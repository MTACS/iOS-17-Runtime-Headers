
@interface MAPaths : NSObject {
    NSMutableArray * _paths;
}

+ (id)paths;
+ (id)pathsWithPaths:(id)arg1;

- (void).cxx_destruct;
- (void)addPath:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (id)graphRepresentationWithStrictNodes:(bool)arg1 strictEdges:(bool)arg2;
- (id)init;
- (id)pathAtIndex:(unsigned long long)arg1;
- (void)removeAllPaths;
- (void)setPaths:(id)arg1;
- (id)uniqueEdgesForLabel:(id)arg1;
- (id)uniqueNodesForLabel:(id)arg1;

@end
