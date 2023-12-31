
@interface HSUpdateRequest : HSRequest {
    long long  _connectionType;
}

+ (id)requestWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2 connectionType:(long long)arg3;

- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2 connectionType:(long long)arg3;
- (bool)isConcurrent;
- (double)timeoutInterval;

@end
