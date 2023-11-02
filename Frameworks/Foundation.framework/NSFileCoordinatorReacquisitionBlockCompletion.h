
@interface NSFileCoordinatorReacquisitionBlockCompletion : NSObject <NSFileCoordinationRetainedAccess> {
    NSObject<OS_dispatch_group> * group;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)completionWithBlock:(id /* block */)arg1 queue:(id)arg2;

- (void)dealloc;
- (void)decrement;
- (void)increment;

@end
