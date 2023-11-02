
@interface ENSessionUploadNoteContext : NSObject {
    id /* block */  _completion;
    EDAMNote * _note;
    ENNoteRef * _noteRef;
    ENNoteStoreClient * _noteStore;
    ENNotebook * _notebook;
    long long  _policy;
    id /* block */  _progress;
    ENNoteRef * _refToReplace;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) EDAMNote *note;
@property (nonatomic, retain) ENNoteRef *noteRef;
@property (nonatomic, retain) ENNoteStoreClient *noteStore;
@property (nonatomic, retain) ENNotebook *notebook;
@property (nonatomic) long long policy;
@property (nonatomic, copy) id /* block */ progress;
@property (nonatomic, retain) ENNoteRef *refToReplace;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)note;
- (id)noteRef;
- (id)noteStore;
- (id)notebook;
- (long long)policy;
- (id /* block */)progress;
- (id)refToReplace;
- (void)setCompletion:(id /* block */)arg1;
- (void)setNote:(id)arg1;
- (void)setNoteRef:(id)arg1;
- (void)setNoteStore:(id)arg1;
- (void)setNotebook:(id)arg1;
- (void)setPolicy:(long long)arg1;
- (void)setProgress:(id /* block */)arg1;
- (void)setRefToReplace:(id)arg1;

@end
