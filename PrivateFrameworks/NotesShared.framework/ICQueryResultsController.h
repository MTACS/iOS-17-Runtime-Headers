
@interface ICQueryResultsController : NSObject {
    ICQuery * _query;
    ICQueryResultsControllerObjC * _queryResultsControllerObjC;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) ICQuery *query;
@property (nonatomic, retain) ICQueryResultsControllerObjC *queryResultsControllerObjC;

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)arg1 query:(id)arg2;
- (id)managedObjectContext;
- (id)performFetch;
- (id)query;
- (id)queryResultsControllerObjC;
- (void)setQuery:(id)arg1;
- (void)setQueryResultsControllerObjC:(id)arg1;

@end
