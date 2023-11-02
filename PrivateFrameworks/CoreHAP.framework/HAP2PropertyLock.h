
@interface HAP2PropertyLock : HAP2Lock

+ (id)lockWithName:(id)arg1;

- (void)performBlock:(id /* block */)arg1;
- (void)performReadingBlock:(id /* block */)arg1;
- (void)performWritingBlock:(id /* block */)arg1;

@end
