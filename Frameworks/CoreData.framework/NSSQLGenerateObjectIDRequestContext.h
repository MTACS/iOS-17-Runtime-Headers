
@interface NSSQLGenerateObjectIDRequestContext : NSSQLStoreRequestContext {
    NSDictionary * _entitiesAndCounts;
    NSSQLModel * _model;
}

- (void)dealloc;
- (bool)executeRequestCore:(id*)arg1;
- (id)initForEntitiesAndCounts:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;

@end
