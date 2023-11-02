
@interface PXPeopleMetricsActionQueue : NSObject {
    NSMutableArray * _items;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _queueLock;
}

@property (nonatomic, readonly) NSMutableArray *items;

- (void).cxx_destruct;
- (void)addItemToEnd:(id)arg1;
- (void)addItemToFront:(id)arg1;
- (void)clearQueue;
- (bool)containsPerson:(id)arg1;
- (id)getNextItemAndPop;
- (id)init;
- (id)items;

@end
