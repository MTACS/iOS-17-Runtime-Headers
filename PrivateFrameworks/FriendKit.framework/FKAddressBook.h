
@interface FKAddressBook : NSObject {
    void * _addressBook;
    NSObject<OS_dispatch_queue> * _operationQueue;
}

@property (nonatomic) void*addressBook;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *operationQueue;

+ (void)performBlock:(id /* block */)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void*)addressBook;
- (void)dealloc;
- (id)init;
- (id)operationQueue;
- (void)setAddressBook:(void*)arg1;
- (void)setOperationQueue:(id)arg1;

@end
