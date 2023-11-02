
@interface AVGlobalOperationQueue : NSObject {
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSArray *unfinishedOperations;

+ (id)defaultQueue;

- (void)dealloc;
- (id)description;
- (void)enqueueOperation:(id)arg1;
- (id)init;
- (id)unfinishedOperations;

@end
