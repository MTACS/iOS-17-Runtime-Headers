
@interface FBKQuestionDependencyGraph : NSObject {
    FBKBugForm * _bugForm;
    NSDictionary * _nodes;
    NSMapTable * _tatToQuestionMap;
}

@property (retain) FBKBugForm *bugForm;
@property (retain) NSDictionary *nodes;
@property (retain) NSMapTable *tatToQuestionMap;

- (void).cxx_destruct;
- (id)bugForm;
- (id)dependencyNodeForQuestion:(id)arg1;
- (id)initWithBugForm:(id)arg1;
- (id)nodes;
- (id)questionsDependentOnQuestion:(id)arg1;
- (void)setBugForm:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setTatToQuestionMap:(id)arg1;
- (id)tatToQuestionMap;
- (bool)visibilityForQuestion:(id)arg1 inFormResponse:(id)arg2;

@end
