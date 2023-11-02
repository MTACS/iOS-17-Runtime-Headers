
@interface ML3DatabaseValidation : NSObject {
    id /* block */  _completionHandler;
    <ML3DatabaseValidationDelegate> * _delegate;
    ML3MusicLibrary * _library;
    bool  _truncateBeforeValidating;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) <ML3DatabaseValidationDelegate> *delegate;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic) bool truncateBeforeValidating;

- (void).cxx_destruct;
- (bool)_internalUserAgreesToRebuildUnmigratableDatabase;
- (void)_logDatabasePathDirectoryAttributes;
- (bool)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id*)arg2;
- (bool)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id*)arg2;
- (bool)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id*)arg2;
- (bool)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id*)arg2;
- (id /* block */)completionHandler;
- (id)delegate;
- (id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (id)library;
- (void)runValidation;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTruncateBeforeValidating:(bool)arg1;
- (bool)truncateBeforeValidating;

@end
