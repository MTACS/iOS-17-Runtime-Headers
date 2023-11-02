
@protocol ARRemoteTechniqueService <NSObject>

@required

- (void)captureBehaviorWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)isActiveWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)numberOfActiveConnectionsWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)prepare:(bool)arg1;
- (void)processData:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: <ARData> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ARData> *, NSError *, void*
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id <ARResultDataContext>)arg2;
- (void)requiredSensorDataTypesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)requiredTimeIntervalWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, NSError *, void*
- (void)resultDataClassesWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)setActive:(bool)arg1;

@end
