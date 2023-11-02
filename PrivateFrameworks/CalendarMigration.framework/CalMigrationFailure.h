
@interface CalMigrationFailure : NSObject {
    NSArray * _databaseIntegrityErrors;
    NSString * _failureDescription;
    bool  _isFatal;
    NSString * _relatedPath;
    unsigned long long  _stage;
    NSError * _underlyingError;
}

@property (nonatomic, readonly, copy) NSArray *databaseIntegrityErrors;
@property (nonatomic, readonly, copy) NSString *failureDescription;
@property (nonatomic, readonly) bool isFatal;
@property (nonatomic, readonly, copy) NSString *relatedPath;
@property (nonatomic, readonly) unsigned long long stage;
@property (nonatomic, readonly, copy) NSError *underlyingError;

+ (id)_labelForStage:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)databaseIntegrityErrors;
- (id)description;
- (id)failureDescription;
- (id)initWithDatabaseIntegrityErrors:(id)arg1;
- (id)initWithDescription:(id)arg1 stage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedPath:(id)arg4 isFatal:(bool)arg5;
- (bool)isFatal;
- (id)relatedPath;
- (unsigned long long)stage;
- (id)underlyingError;

@end
