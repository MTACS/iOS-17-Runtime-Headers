
@interface AFQueue : NSObject <NSFastEnumeration> {
    unsigned long long  _count;
    <AFQueueDelegate> * _delegate;
    AFLinkedListItem * _head;
    AFLinkedListItem * _tail;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) <AFQueueDelegate> *delegate;
@property (nonatomic, readonly) id frontObject;

- (void).cxx_destruct;
- (id)_objects;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)delegate;
- (id)dequeueAllObjects;
- (id)dequeueObject;
- (id)description;
- (void)enqueueObject:(id)arg1;
- (void)enqueueObjects:(id)arg1;
- (id)frontObject;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;

@end
