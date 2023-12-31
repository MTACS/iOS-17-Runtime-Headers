
@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation {
    NSArray * _identifierSets;
    MPMediaLibraryView * _libraryView;
    Class  _modelClass;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) NSArray *identifierSets;
@property (nonatomic, copy) MPMediaLibraryView *libraryView;
@property (nonatomic) Class modelClass;
@property (nonatomic, copy) id /* block */ responseHandler;

+ (bool)supportsModelClass:(Class)arg1;

- (void).cxx_destruct;
- (void)execute;
- (id)identifierSets;
- (id)libraryView;
- (Class)modelClass;
- (id /* block */)responseHandler;
- (void)setIdentifierSets:(id)arg1;
- (void)setLibraryView:(id)arg1;
- (void)setModelClass:(Class)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
