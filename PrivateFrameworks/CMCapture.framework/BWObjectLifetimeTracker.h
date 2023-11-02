
@interface BWObjectLifetimeTracker : NSObject {
    id /* block */  _deallocHandler;
}

+ (void)trackAttachmentBearer:(void*)arg1 deallocHandler:(id /* block */)arg2;
+ (id)trackerWithDeallocHandler:(id /* block */)arg1;

- (void)dealloc;

@end
