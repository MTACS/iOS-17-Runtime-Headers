
@interface MPLibraryObjectDatabase : NSObject <MPObjectDatabase> {
    MPMediaLibrary * _library;
    MPMediaLibraryView * _libraryView;
    MSVSQLDatabase * _msvDatabase;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPMediaLibrary *library;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateRequestsForSupportedTypesWithPropertySet:(id)arg1 identifiers:(id)arg2 block:(id /* block */)arg3;
- (id)identifiersForTokens:(id)arg1;
- (id)identifiersMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithLibrary:(id)arg1;
- (id)library;
- (id)modelObjectMatchingIdentifierSet:(id)arg1 propertySet:(id)arg2 error:(id*)arg3;
- (id)tokenForIdentifiers:(id)arg1 propertySet:(id)arg2 options:(unsigned long long)arg3;

@end
