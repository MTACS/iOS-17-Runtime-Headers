
@interface SSBDatabaseUpdaterStatus : NSObject {
    struct DatabaseUpdaterStatus { 
        int state; 
        int provider; 
    }  _databaseUpdaterStatus;
}

@property (nonatomic, readonly) unsigned long long databaseUpdaterState;
@property (nonatomic, readonly) NSString *provider;

- (id)_initWithDatabaseUpdaterStatus:(struct DatabaseUpdaterStatus { int x1; int x2; })arg1;
- (unsigned long long)databaseUpdaterState;
- (id)provider;

@end
