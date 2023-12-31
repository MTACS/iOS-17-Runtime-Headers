
@interface PFUbiquityMergeConflict : NSMergeConflict {
    NSDictionary * _ancestorSnapshot;
}

@property (retain) NSDictionary *ancestorSnapshot;

- (id)ancestorSnapshot;
- (void)dealloc;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;
- (void)setAncestorSnapshot:(id)arg1;

@end
