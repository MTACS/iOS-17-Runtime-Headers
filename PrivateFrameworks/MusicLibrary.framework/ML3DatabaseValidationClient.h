
@interface ML3DatabaseValidationClient : NSObject {
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _validatableDatabases;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)_validatableDatabaseForPath:(id)arg1;
- (bool)_validateDatabaseForPath:(id)arg1 usingLibrary:(id)arg2;
- (id)init;
- (bool)isValidatingDatabaseForPath:(id)arg1;
- (bool)validateDatabaseAtPath:(id)arg1;
- (bool)validateDatabaseForConnection:(id)arg1;
- (bool)validateDatabaseForLibrary:(id)arg1;

@end
