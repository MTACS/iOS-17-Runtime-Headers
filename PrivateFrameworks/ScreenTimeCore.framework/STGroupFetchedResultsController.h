
@interface STGroupFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate> {
    unsigned long long  _changeCounter;
    <STGroupFetchedResultsControllerDelegate> * _delegate;
    NSFetchedResultsController * _resultsController;
    NSArray * _resultsControllers;
    NSArray * _resultsRequests;
}

@property (nonatomic) unsigned long long changeCounter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <STGroupFetchedResultsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSFetchedResultsController *resultsController;
@property (nonatomic, retain) NSArray *resultsControllers;
@property (nonatomic, retain) NSArray *resultsRequests;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_evaluateCounter;
- (unsigned long long)changeCounter;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)delegate;
- (id)initWithContext:(id)arg1 resultsRequests:(id)arg2;
- (id)initWithResultsRequests:(id)arg1 cacheName:(id)arg2 managedObjectContext:(id)arg3;
- (id)resultsController;
- (id)resultsControllers;
- (id)resultsRequests;
- (void)setChangeCounter:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResultsController:(id)arg1;
- (void)setResultsControllers:(id)arg1;
- (void)setResultsRequests:(id)arg1;

@end
