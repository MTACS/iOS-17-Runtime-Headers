
@interface ENSessionFindNotesContext : NSObject {
    NSArray * _allNotebooks;
    id /* block */  _completion;
    NSMutableArray * _findMetadataResults;
    NSMutableArray * _linkedNotebooksToSearch;
    unsigned long long  _maxResults;
    EDAMNoteFilter * _noteFilter;
    bool  _requiresLocalMerge;
    NSSet * _resultGuidsFromBusiness;
    EDAMNotesMetadataResultSpec * _resultSpec;
    NSArray * _results;
    unsigned long long  _scope;
    ENNotebook * _scopeNotebook;
    bool  _sortAscending;
    unsigned long long  _sortOrder;
}

@property (nonatomic, retain) NSArray *allNotebooks;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSMutableArray *findMetadataResults;
@property (nonatomic, retain) NSMutableArray *linkedNotebooksToSearch;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic, retain) EDAMNoteFilter *noteFilter;
@property (nonatomic) bool requiresLocalMerge;
@property (nonatomic, retain) NSSet *resultGuidsFromBusiness;
@property (nonatomic, retain) EDAMNotesMetadataResultSpec *resultSpec;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic) unsigned long long scope;
@property (nonatomic, retain) ENNotebook *scopeNotebook;
@property (nonatomic) bool sortAscending;
@property (nonatomic) unsigned long long sortOrder;

- (void).cxx_destruct;
- (id)allNotebooks;
- (id /* block */)completion;
- (id)findMetadataResults;
- (id)linkedNotebooksToSearch;
- (unsigned long long)maxResults;
- (id)noteFilter;
- (bool)requiresLocalMerge;
- (id)resultGuidsFromBusiness;
- (id)resultSpec;
- (id)results;
- (unsigned long long)scope;
- (id)scopeNotebook;
- (void)setAllNotebooks:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFindMetadataResults:(id)arg1;
- (void)setLinkedNotebooksToSearch:(id)arg1;
- (void)setMaxResults:(unsigned long long)arg1;
- (void)setNoteFilter:(id)arg1;
- (void)setRequiresLocalMerge:(bool)arg1;
- (void)setResultGuidsFromBusiness:(id)arg1;
- (void)setResultSpec:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setScope:(unsigned long long)arg1;
- (void)setScopeNotebook:(id)arg1;
- (void)setSortAscending:(bool)arg1;
- (void)setSortOrder:(unsigned long long)arg1;
- (bool)sortAscending;
- (unsigned long long)sortOrder;

@end
