
@interface CRCtcBeamState : NSObject {
    NSMutableDictionary * _mutablePaths;
}

@property (nonatomic, retain) NSMutableDictionary *mutablePaths;
@property (readonly) NSDictionary *paths;

- (void).cxx_destruct;
- (void)addPath:(id)arg1;
- (id)init;
- (void)kBest:(id*)arg1 discarded:(id*)arg2 k:(unsigned long long)arg3;
- (void)mergePathsWithTrailingWhitespaces;
- (id)mutablePaths;
- (id)pathForString:(id)arg1;
- (id)paths;
- (void)setMutablePaths:(id)arg1;
- (id)sortedKeys;

@end
