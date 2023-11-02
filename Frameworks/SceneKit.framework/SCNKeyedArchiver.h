
@interface SCNKeyedArchiver : NSKeyedArchiver {
    NSDictionary * options;
    bool  skipMorphTargets;
}

@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) bool skipMorphTargets;

+ (id)archivedDataWithRootObject:(id)arg1 options:(id)arg2;

- (void)dealloc;
- (id)options;
- (void)setOptions:(id)arg1;
- (void)setSkipMorphTargets:(bool)arg1;
- (bool)skipMorphTargets;

@end
