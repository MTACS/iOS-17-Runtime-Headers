
@interface HMDBackgroundOperationGraph : HMFObject <HMFLogging> {
    NSMapTable * _inDegrees;
    NSMapTable * _opGraph;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *inDegrees;
@property (nonatomic, retain) NSMapTable *opGraph;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addEdgeFrom:(id)arg1 to:(id)arg2;
- (void)addVertex:(id)arg1;
- (bool)canAddEdgeFrom:(id)arg1 to:(id)arg2;
- (bool)doesCycleExist;
- (bool)doesVertexAlreadyExistInGraph:(id)arg1;
- (id)getIndepentVertices;
- (id)inDegrees;
- (id)initWithOperations:(id)arg1;
- (id)opGraph;
- (void)removeVertex:(id)arg1;
- (void)setInDegrees:(id)arg1;
- (void)setOpGraph:(id)arg1;

@end
