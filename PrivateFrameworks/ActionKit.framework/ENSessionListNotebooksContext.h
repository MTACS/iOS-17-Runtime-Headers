
@interface ENSessionListNotebooksContext : NSObject {
    NSMutableDictionary * _businessNotebooks;
    id /* block */  _completion;
    NSError * _error;
    NSMutableArray * _linkedPersonalNotebooks;
    long long  _pendingSharedNotebooks;
    NSMutableArray * _resultNotebooks;
    NSCountedSet * _sharedBusinessNotebookGuids;
    NSMutableDictionary * _sharedBusinessNotebooks;
    NSMutableDictionary * _sharedNotebooks;
}

@property (nonatomic, retain) NSMutableDictionary *businessNotebooks;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSMutableArray *linkedPersonalNotebooks;
@property (nonatomic) long long pendingSharedNotebooks;
@property (nonatomic, retain) NSMutableArray *resultNotebooks;
@property (nonatomic, retain) NSCountedSet *sharedBusinessNotebookGuids;
@property (nonatomic, retain) NSMutableDictionary *sharedBusinessNotebooks;
@property (nonatomic, retain) NSMutableDictionary *sharedNotebooks;

- (void).cxx_destruct;
- (id)businessNotebooks;
- (id /* block */)completion;
- (id)error;
- (id)linkedPersonalNotebooks;
- (long long)pendingSharedNotebooks;
- (id)resultNotebooks;
- (void)setBusinessNotebooks:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setLinkedPersonalNotebooks:(id)arg1;
- (void)setPendingSharedNotebooks:(long long)arg1;
- (void)setResultNotebooks:(id)arg1;
- (void)setSharedBusinessNotebookGuids:(id)arg1;
- (void)setSharedBusinessNotebooks:(id)arg1;
- (void)setSharedNotebooks:(id)arg1;
- (id)sharedBusinessNotebookGuids;
- (id)sharedBusinessNotebooks;
- (id)sharedNotebooks;

@end
