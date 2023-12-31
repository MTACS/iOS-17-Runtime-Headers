
@interface GKDecisionTree : NSObject <NSSecureCoding> {
    struct GKCDecisionTree { struct GKCDecisionNode {} *x1; struct GKCDecisionNode {} *x2; } * _decisionTree;
    bool  _isInduced;
    GKRandomSource * _randomSource;
    GKDecisionNode * _rootNode;
    MLGKDecisionTree * mlkitDecisionTree;
}

@property (nonatomic, copy) GKRandomSource *randomSource;
@property (nonatomic, retain) GKDecisionNode *rootNode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)exportToURL:(id)arg1 error:(id)arg2;
- (id)findAccuracyWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;
- (id)findActionForAnswers:(id)arg1;
- (id)getFlattenedTree;
- (id)init;
- (id)initWithAttribute:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3;
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 maxDepth:(unsigned long long)arg4 minSamplesSplit:(unsigned long long)arg5;
- (id)initWithURL:(id)arg1 error:(id)arg2;
- (id)randomSource;
- (id)rootNode;
- (void)setRandomSource:(id)arg1;
- (void)setRootNode:(id)arg1;

@end
