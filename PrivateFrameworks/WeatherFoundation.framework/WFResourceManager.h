
@interface WFResourceManager : NSObject <WFResourceNodeDelegate> {
    bool  _didEvaluateAvailabilityOfNodes;
    NSMutableArray * _resourceNodes;
    bool  _resourcesAvailable;
    bool  _resourcesRequiredForDisplayAvailable;
    NSObject<OS_dispatch_queue> * _stateAccessQueue;
    NSMapTable * _targetSelectorTable;
    NSOrderedSet * _unavailableResourceErrors;
    NSMutableOrderedSet * _unavailableResources;
}

@property (nonatomic, readonly) NSSet *accessResources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didEvaluateAvailabilityOfNodes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *resourceNodes;
@property (nonatomic) bool resourcesAvailable;
@property (nonatomic) bool resourcesRequiredForDisplayAvailable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *targetSelectorTable;
@property (nonatomic, retain) NSOrderedSet *unavailableResourceErrors;
@property (nonatomic, retain) NSMutableOrderedSet *unavailableResources;

- (void).cxx_destruct;
- (id)accessResources;
- (void)addResource:(id)arg1;
- (void)addResourceNodes:(id)arg1;
- (void)addResourceObjectsOfClassesOrProtocols:(id)arg1 withinNode:(id)arg2 toSet:(id)arg3;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
- (id)currentlyRequiredResourcesOfClass:(Class)arg1;
- (bool)currentlyRequiresResourceOfClass:(Class)arg1;
- (bool)currentlyRequiresResourceOfClasses:(id)arg1;
- (bool)didEvaluateAvailabilityOfNodes;
- (void)evaluateAvailabilityOfNodesIfNeeded;
- (void)evaluateAvailabilityOfNodesWithChangedNode:(id)arg1;
- (id)initWithDefinitions:(id)arg1;
- (void)makeAccessResourcesAvailableWithUserInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)nodeIsAvailable:(id)arg1 error:(id*)arg2;
- (bool)nodeIsRelevant:(id)arg1;
- (void)notifyTargets;
- (void)refreshAvailabilityOfRequiredResourcesOfClasses:(id)arg1;
- (id)relevantNodes;
- (void)removeResourceNodes:(id)arg1;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)resourceNodeAvailabilityChanged:(id)arg1;
- (id)resourceNodes;
- (id)resourceObjectsConformingToProtocol:(id)arg1;
- (id)resourceObjectsOfClass:(Class)arg1;
- (id)resourceObjectsOfClasses:(id)arg1;
- (bool)resourcesAvailable;
- (bool)resourcesRequiredForDisplayAvailable;
- (id)selectorSetForTarget:(id)arg1;
- (void)setResourceNodes:(id)arg1;
- (void)setResourcesAvailable:(bool)arg1;
- (void)setResourcesRequiredForDisplayAvailable:(bool)arg1;
- (void)setTargetSelectorTable:(id)arg1;
- (void)setUnavailableResourceErrors:(id)arg1;
- (void)setUnavailableResources:(id)arg1;
- (id)stateAccessQueue;
- (id)targetSelectorTable;
- (id)unavailableResourceErrors;
- (id)unavailableResources;

@end
