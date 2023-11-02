
@protocol _ANEDaemonProtocol

@required

- (void)compileModel:(void *)arg1 sandboxExtension:(void *)arg2 options:(void *)arg3 qos:(void *)arg4 withReply:(void *)arg5; // needs 5 arg types, found 13: _ANEModel *, NSString *, NSDictionary *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSString *, NSError *, void*
- (void)compiledModelExistsFor:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 9: _ANEModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)compiledModelExistsMatchingHash:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)loadModel:(void *)arg1 sandboxExtension:(void *)arg2 options:(void *)arg3 qos:(void *)arg4 withReply:(void *)arg5; // needs 5 arg types, found 16: _ANEModel *, NSString *, NSDictionary *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, unsigned long long, unsigned long long, BOOL, NSString *, NSError *, void*
- (void)prepareChainingWithModel:(void *)arg1 options:(void *)arg2 chainingReq:(void *)arg3 qos:(void *)arg4 withReply:(void *)arg5; // needs 5 arg types, found 11: _ANEModel *, NSDictionary *, _ANEChainingRequest *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)purgeCompiledModel:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: _ANEModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)purgeCompiledModelMatchingHash:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unloadModel:(void *)arg1 options:(void *)arg2 qos:(void *)arg3 withReply:(void *)arg4; // needs 4 arg types, found 10: _ANEModel *, NSDictionary *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
