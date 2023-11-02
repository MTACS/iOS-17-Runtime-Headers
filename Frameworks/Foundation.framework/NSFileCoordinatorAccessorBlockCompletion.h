
@interface NSFileCoordinatorAccessorBlockCompletion : NSObject <NSFileCoordinationRetainedAccess> {
    id /* block */  block;
    _Atomic int  count;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)completionWithBlock:(id /* block */)arg1;

- (void)dealloc;
- (void)decrement;
- (void)increment;

@end
