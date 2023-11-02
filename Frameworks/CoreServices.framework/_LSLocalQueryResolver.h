
@interface _LSLocalQueryResolver : NSObject <_LSQueryResolving>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(id /* block */)arg3;
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3;

@end
