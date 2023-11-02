
@interface PXActivityCoordinator : NSObject {
    NSMutableArray * _records;
}

+ (id)coordinatorForActivity:(id)arg1;

- (void).cxx_destruct;
- (void)_update;
- (id)init;
- (void)registerItem:(id)arg1;
- (void)unregisterItem:(id)arg1;

@end
