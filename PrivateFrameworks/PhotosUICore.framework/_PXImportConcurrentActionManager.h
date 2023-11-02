
@interface _PXImportConcurrentActionManager : NSObject {
    NSMutableArray * _operations;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)init;
- (void)removeOperation:(id)arg1;

@end
