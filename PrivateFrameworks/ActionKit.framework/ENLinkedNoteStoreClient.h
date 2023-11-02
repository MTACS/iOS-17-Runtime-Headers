
@interface ENLinkedNoteStoreClient : ENNoteStoreClient {
    <ENLinkedNoteStoreClientDelegate> * _delegate;
    ENLinkedNotebookRef * _linkedNotebookRef;
}

@property (nonatomic) <ENLinkedNoteStoreClientDelegate> *delegate;
@property (nonatomic, retain) ENLinkedNotebookRef *linkedNotebookRef;

+ (id)noteStoreClientForLinkedNotebookRef:(id)arg1;

- (void).cxx_destruct;
- (id)authenticationToken;
- (id)delegate;
- (id)linkedNotebookRef;
- (id)noteStoreUrl;
- (void)setDelegate:(id)arg1;
- (void)setLinkedNotebookRef:(id)arg1;

@end
