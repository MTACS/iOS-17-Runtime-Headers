
@interface LSMIResultRegistrantServerDatabaseContextProviding : NSObject <LSMIResultRegistrantDatabaseContextProviding> {
    struct Context { 
        struct LSContext {} *_contextPointer; 
        struct LSContext { 
            _LSDatabase *db; 
        } _contextStorage; 
        bool _created; 
        NSError *_error; 
    }  _ctx;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)armSaveTimerIfNecessary:(id /* block */)arg1;
- (id)databaseContextWithError:(id*)arg1;
- (id)init;

@end
