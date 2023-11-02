
@interface CSAttSiriGazeQueue : NSObject {
    NSMutableArray * _data;
}

@property (nonatomic, retain) NSMutableArray *data;

- (void).cxx_destruct;
- (id)data;
- (id)dequeue;
- (void)enqueue:(double)arg1;
- (id)init;
- (void)setData:(id)arg1;
- (id)valueAt:(unsigned long long)arg1;

@end
