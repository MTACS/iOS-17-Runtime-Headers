
@interface MPStoreLibraryMappingResponse : NSObject {
    long long  _libraryAddedStatus;
    NSMutableDictionary * _storeIdentifierSetToLibraryIdentifierSet;
}

@property (nonatomic) long long libraryAddedStatus;

- (void).cxx_destruct;
- (long long)libraryAddedStatus;
- (id)libraryIdentifierSetForIdentifierSet:(id)arg1;
- (void)setLibraryAddedStatus:(long long)arg1;
- (void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2;

@end
