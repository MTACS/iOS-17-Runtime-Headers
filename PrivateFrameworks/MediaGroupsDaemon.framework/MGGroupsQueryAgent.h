
@interface MGGroupsQueryAgent : NSObject {
    NSDictionary * _containers;
    MGGroupIdentifier * _currentIdentifier;
    <MGGroupsQueryAgentDelegate> * _delegate;
    NSDictionary * _groups;
    NSDictionary * _groupsByMediator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _operations;
    NSDictionary * _queries;
    NSOperationQueue * _queue;
    NSDictionary * _variables;
}

@property (nonatomic, copy) NSDictionary *containers;
@property (nonatomic, copy) MGGroupIdentifier *currentIdentifier;
@property (nonatomic, readonly) <MGGroupsQueryAgentDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *groups;
@property (nonatomic, copy) NSDictionary *groupsByMediator;
@property (nonatomic, copy) NSDictionary *operations;
@property (nonatomic, copy) NSDictionary *queries;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (nonatomic, copy) NSDictionary *variables;

- (void).cxx_destruct;
- (void)_performQueryExchangeUsingGroups:(id)arg1 currentIdentifier:(id)arg2;
- (void)_prepareWithGroups:(id)arg1 currentIdentifier:(id)arg2;
- (void)_queryOperation:(id)arg1 didFindGroups:(id)arg2;
- (void)_withLock:(id /* block */)arg1;
- (void)addOutstandingQuery:(id)arg1;
- (id)containers;
- (id)currentIdentifier;
- (id)delegate;
- (id)groups;
- (id)groupsByMediator;
- (void)groupsMediator:(id)arg1 didUpdateGroups:(id)arg2;
- (void)groupsMediatorRemoved:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)operations;
- (id)outstandingQueryForIdentifier:(id)arg1;
- (id)queries;
- (id)queue;
- (void)removeOutstandingQuery:(id)arg1;
- (void)setContainers:(id)arg1;
- (void)setCurrentDeviceIdentifier:(id)arg1;
- (void)setCurrentIdentifier:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setGroupsByMediator:(id)arg1;
- (void)setOperations:(id)arg1;
- (void)setQueries:(id)arg1;
- (void)setVariables:(id)arg1;
- (id)variables;

@end
