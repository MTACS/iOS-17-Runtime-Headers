
@interface MPServerObjectDatabaseSubPlaybackDispatchImportRequest : MPServerObjectDatabaseAssetImportRequest {
    MPIdentifierSet * _identifiers;
}

- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)arg1 playbackResponse:(id)arg2;
- (bool)performWithDatabaseOperations:(id)arg1 error:(id*)arg2;

@end
