
@interface SXTextComponentBlueprint : SXComponentBlueprint {
    NSDictionary * _exclusionPaths;
}

@property (nonatomic, readonly) NSDictionary *exclusionPaths;

- (void).cxx_destruct;
- (void)addExclusionPath:(id)arg1 forIdentifier:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)exclusionPaths;
- (void)invalidateSize;

@end
