
@interface CUIKUserOperation : NSObject {
    bool  _createdAsInverseOfAnotherOperation;
    NSError * _error;
    EKEventStore * _eventStore;
    bool  _inverseOperationPrecomputed;
    NSArray * _objects;
    NSArray * _originalObjects;
    NSArray * _originalSliceDescriptions;
    NSString * _precomputedActionName;
    CUIKUserOperation * _precomputedInverseOperation;
    long long  _span;
}

@property (nonatomic, readonly) NSString *actionName;
@property (nonatomic) bool createdAsInverseOfAnotherOperation;
@property (retain) NSError *error;
@property (nonatomic) EKEventStore *eventStore;
@property (nonatomic) bool inverseOperationPrecomputed;
@property (nonatomic, readonly) NSArray *objects;
@property (nonatomic, retain) NSArray *originalObjects;
@property (nonatomic, retain) NSArray *originalSliceDescriptions;
@property (nonatomic, retain) NSString *precomputedActionName;
@property (nonatomic, retain) CUIKUserOperation *precomputedInverseOperation;
@property (nonatomic, readonly) long long span;

+ (id)operationForContext:(id)arg1;
+ (id)operationWithObjects:(id)arg1 span:(long long)arg2;

- (void).cxx_destruct;
- (id)_actionName;
- (bool)_executeWithUndoDelegate:(id)arg1 error:(id*)arg2;
- (id)_inverseOperation;
- (Class)_inverseOperationClass;
- (long long)_inverseOperationSpan;
- (id)_objectsForInverse;
- (void)_precomputeActionName;
- (void)_precomputeInverseOperation;
- (long long)_spanFromSpan:(long long)arg1 objects:(id)arg2;
- (void)_storeOriginalSliceDescriptions;
- (id)actionName;
- (bool)createdAsInverseOfAnotherOperation;
- (id)error;
- (id)eventStore;
- (bool)executeWithUndoDelegate:(id)arg1;
- (id)initWithObjects:(id)arg1 span:(long long)arg2 createdAsInverseOfAnotherOperation:(bool)arg3;
- (id)inverseOperation;
- (bool)inverseOperationPrecomputed;
- (id)objects;
- (id)originalObjects;
- (id)originalSliceDescriptions;
- (id)precomputedActionName;
- (id)precomputedInverseOperation;
- (void)setCreatedAsInverseOfAnotherOperation:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setInverseOperationPrecomputed:(bool)arg1;
- (void)setOriginalObjects:(id)arg1;
- (void)setOriginalSliceDescriptions:(id)arg1;
- (void)setPrecomputedActionName:(id)arg1;
- (void)setPrecomputedInverseOperation:(id)arg1;
- (long long)span;

@end
