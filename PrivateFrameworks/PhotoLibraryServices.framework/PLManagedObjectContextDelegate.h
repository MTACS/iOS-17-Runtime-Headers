
@interface PLManagedObjectContextDelegate : NSObject <NSSQLiteDatabaseTraceDelegate> {
    <NSSQLiteDatabaseTraceDelegate> * _fetchInstrumentation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fetchInstrumentationLock;
    <NSSQLiteDatabaseTraceDelegate> * _fetchRecorder;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fetchRecorderLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <NSSQLiteDatabaseTraceDelegate> *fetchInstrumentation;
@property <NSSQLiteDatabaseTraceDelegate> *fetchRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fetchInstrumentation;
- (id)fetchRecorder;
- (void)managedObjectContext:(id)arg1 didExecuteFetchRequest:(id)arg2 withSQLString:(id)arg3 bindVariables:(id)arg4 rowCount:(long long)arg5;
- (void)managedObjectContext:(id)arg1 willExecuteFetchRequest:(id)arg2;
- (void)setFetchInstrumentation:(id)arg1;
- (void)setFetchRecorder:(id)arg1;

@end
