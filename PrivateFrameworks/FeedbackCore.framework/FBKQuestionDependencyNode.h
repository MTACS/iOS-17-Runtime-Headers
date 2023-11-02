
@interface FBKQuestionDependencyNode : NSObject {
    NSHashTable * _dependencyChildren;
    NSSet * _dependencyTats;
    FBKQuestionDependencyGraph * _graph;
    NSNumber * _questionID;
    NSString * _tat;
    NSPredicate * _visibilityPredicateTemplate;
}

@property (retain) NSHashTable *dependencyChildren;
@property (retain) NSSet *dependencyTats;
@property (readonly) NSSet *dependentChildren;
@property FBKQuestionDependencyGraph *graph;
@property (readonly) NSNumber *questionID;
@property (readonly) NSString *tat;
@property (retain) NSPredicate *visibilityPredicateTemplate;

- (void).cxx_destruct;
- (id)_predicateFromLeafArray:(id)arg1;
- (id)_substitutionFromToken:(id)arg1;
- (id)dependencyChildren;
- (id)dependencyTats;
- (id)dependentChildren;
- (id)dependentTatsForConditions:(id)arg1;
- (id)graph;
- (id)initWithQuestion:(id)arg1;
- (bool)isVisibleInFormResponse:(id)arg1;
- (id)predicateForConditions:(id)arg1;
- (id)questionID;
- (void)registerDependentChild:(id)arg1;
- (void)setDependencyChildren:(id)arg1;
- (void)setDependencyTats:(id)arg1;
- (void)setGraph:(id)arg1;
- (void)setVisibilityPredicateTemplate:(id)arg1;
- (id)tat;
- (id)visibilityPredicateTemplate;

@end
