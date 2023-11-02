
@interface _GEOConfigDBUpdateExpireOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    GEOSQLiteDB * _db;
    GEOConfigExpiringKey * _expire;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init:(id)arg1 expire:(id)arg2;
- (bool)performOperation;

@end
