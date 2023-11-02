
@interface ICDocCamRectangleResultsQueue : NSObject {
    NSMutableArray * _array;
}

@property (nonatomic, retain) NSMutableArray *array;

- (void).cxx_destruct;
- (void)apply:(id /* block */)arg1 atIndex:(long long)arg2;
- (void)apply:(id /* block */)arg1 fromIndex:(long long)arg2 toIndex:(unsigned long long)arg3;
- (id)array;
- (void)clear;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;
- (id)peek;
- (id)peek:(long long)arg1;
- (id)peekTail;
- (void)setArray:(id)arg1;
- (long long)size;

@end
