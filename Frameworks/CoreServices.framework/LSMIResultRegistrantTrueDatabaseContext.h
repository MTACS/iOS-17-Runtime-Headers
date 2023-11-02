
@interface LSMIResultRegistrantTrueDatabaseContext : NSObject <LSMIResultRegistrantDatabaseContext> {
    struct LSContext { 
        _LSDatabase *db; 
    }  _context;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findContainerizedRecordForBundleUnit:(unsigned int)arg1 error:(id*)arg2;
- (unsigned int)findOrRegisterContainerizedNodeReinitializingContext:(id)arg1 installDictionary:(id)arg2 personasWithAttributes:(id)arg3 error:(id*)arg4;
- (bool)fullBundleExistsForIdentifier:(id)arg1 matchingNode:(id)arg2;
- (id)initWithDatabase:(id)arg1;
- (id /* block */)unregisterApplicationWithBundleIdentifier:(id)arg1 type:(unsigned int)arg2 error:(id*)arg3;

@end
