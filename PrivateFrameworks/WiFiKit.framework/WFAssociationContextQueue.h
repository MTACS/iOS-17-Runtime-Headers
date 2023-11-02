
@interface WFAssociationContextQueue : NSObject {
    NSMutableArray * _queue;
}

@property (nonatomic, retain) NSMutableArray *queue;

- (void).cxx_destruct;
- (void)_dumpQueue;
- (id)init;
- (id)peek;
- (id)pop;
- (void)push:(id)arg1;
- (id)queue;
- (void)removeAll;
- (void)setQueue:(id)arg1;

@end
