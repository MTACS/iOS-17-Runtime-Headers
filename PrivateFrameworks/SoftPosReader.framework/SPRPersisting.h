
@interface SPRPersisting : SPRObject

- (bool)deleteAll:(id*)arg1;
- (bool)deleteWithKey:(id)arg1 error:(id*)arg2;
- (bool)insertWithKey:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (id)retrieveAll:(id*)arg1;
- (id)retrieveWithKey:(id)arg1 error:(id*)arg2;
- (bool)updateWithKey:(id)arg1 value:(id)arg2 error:(id*)arg3;

@end
