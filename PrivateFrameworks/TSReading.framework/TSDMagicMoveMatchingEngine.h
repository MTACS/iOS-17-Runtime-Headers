
@interface TSDMagicMoveMatchingEngine : NSObject {
    NSMutableArray * _matches;
}

+ (id)matchingEngine;

- (void)addMatch:(id)arg1;
- (void)addMatches:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)matchResults;

@end