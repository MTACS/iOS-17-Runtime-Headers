
@interface ATXGamePlayKitDecisionTree : NSObject <NSSecureCoding> {
    struct shared_ptr<ATXGamePlayKitCDecisionTree> { 
        struct ATXGamePlayKitCDecisionTree {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _decisionTree;
    bool  _isInduced;
    ATXGamePlayKitRandomSource * _randomSource;
    ATXGamePlayKitDecisionNode * _rootNode;
    MLGKDecisionTree * mlkitDecisionTree;
}

@property (nonatomic, copy) ATXGamePlayKitRandomSource *randomSource;
@property (nonatomic, retain) ATXGamePlayKitDecisionNode *rootNode;

+ (void)configureKeyedArchiver:(id)arg1;
+ (void)configureKeyedUnarchiver:(id)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
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
- (id)initWithExamples:(id)arg1 actions:(id)arg2 attributes:(id)arg3 maxDepth:(unsigned long long)arg4 minSamplesSplit:(unsigned long long)arg5 ratioForLeafNodeDecision:(double)arg6;
- (id)initWithURL:(id)arg1 error:(id)arg2;
- (id)randomSource;
- (id)rootNode;
- (void)setRandomSource:(id)arg1;
- (void)setRootNode:(id)arg1;

@end
