
@interface SHClusterSQLiteDataStore : NSObject {
    long long  _clusterType;
    NSURL * _databaseFilePathURL;
    double  _databaseMaxAge;
    NSString * _requiredStorefront;
}

@property (nonatomic, readonly) long long clusterType;
@property (nonatomic, readonly) SHClusterStatus *dataStatus;
@property (nonatomic, readonly) NSURL *databaseFilePathURL;
@property (nonatomic, readonly) double databaseMaxAge;
@property (nonatomic, readonly, copy) NSString *requiredStorefront;

+ (bool)sqliteDatabaseExistsAtURL:(id)arg1;

- (void).cxx_destruct;
- (long long)clusterType;
- (id)dataStatus;
- (id)databaseFilePathURL;
- (double)databaseMaxAge;
- (bool)hasNotPassedExpiryDate:(id)arg1 isForCountryCode:(id)arg2;
- (id)initWithClusterType:(long long)arg1 databaseMaxAge:(double)arg2 forStorefront:(id)arg3 databaseFilePathURL:(id)arg4;
- (bool)isDataLoaded;
- (bool)isDataValid;
- (id)requiredStorefront;

@end
