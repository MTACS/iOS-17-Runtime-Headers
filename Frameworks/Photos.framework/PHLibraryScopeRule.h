
@interface PHLibraryScopeRule : NSObject <NSCopying> {
    PLLibraryScopeRule * _proxyObject;
}

@property (nonatomic, readonly) PLLibraryScopeRule *plRepresentation;
@property (nonatomic, retain) PLLibraryScopeRule *proxyObject;

+ (id)_estimatedAssetsForRules:(id)arg1 autoSharePolicy:(short)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)dataFromRules:(id)arg1;
+ (unsigned long long)estimatedAssetCountForRules:(id)arg1 autoSharePolicy:(short)arg2 imageCount:(unsigned long long*)arg3 videoCount:(unsigned long long*)arg4 audioCount:(unsigned long long*)arg5 itemCount:(unsigned long long*)arg6 options:(id)arg7 error:(id*)arg8;
+ (id)fetchLibraryScopeRulesForLibraryScope:(id)arg1 options:(id)arg2;
+ (bool)generateDefaultRulesForLibraryScope:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)suggestedStartDateForRules:(id)arg1 autoSharePolicy:(short)arg2 options:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRangeCondition;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithProxyObject:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)personCondition;
- (id)plRepresentation;
- (id)proxyObject;
- (void)removeConditionOfType:(Class)arg1;
- (void)setProxyObject:(id)arg1;
- (id)unknownConditions;

@end
