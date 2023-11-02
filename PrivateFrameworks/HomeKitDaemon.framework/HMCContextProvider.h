
@interface HMCContextProvider : HMFObject {
    HMCContext * _context;
    NSMutableArray * _redirections;
}

@property (readonly) HMCContext *context;
@property (readonly) NSMutableArray *redirections;

- (void).cxx_destruct;
- (id)context;
- (id)futureInContext:(id /* block */)arg1;
- (id)initWithContext:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (id)redirections;
- (void)registerForChangesOfDatabaseModels:(id)arg1 orWithModelIDs:(id)arg2 changeMask:(unsigned long long)arg3 selector:(SEL)arg4;
- (void)removeAllRegistrations;
- (void)unsafeSynchronousBlock:(id /* block */)arg1;

@end
