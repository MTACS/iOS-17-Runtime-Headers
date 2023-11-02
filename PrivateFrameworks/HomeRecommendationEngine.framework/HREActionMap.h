
@interface HREActionMap : NSObject <NSCopying> {
    NSMutableArray * _childMaps;
    NSPredicate * _condition;
    bool  _visitedByFlatten;
}

@property (nonatomic, retain) NSMutableArray *childMaps;
@property (nonatomic, retain) NSPredicate *condition;
@property (nonatomic) bool visitedByFlatten;

+ (id)actionMapWithChildMaps:(id)arg1;
+ (id)emptyMap;

- (void).cxx_destruct;
- (id)_initWithCondition:(id)arg1 childMaps:(id)arg2;
- (id)childMaps;
- (id)condition;
- (bool)conditionSatisfiedByObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flattenedMapEvaluatedForObject:(id)arg1;
- (id)mergeWithActionMaps:(id)arg1;
- (void)setChildMaps:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setVisitedByFlatten:(bool)arg1;
- (bool)visitedByFlatten;

@end
