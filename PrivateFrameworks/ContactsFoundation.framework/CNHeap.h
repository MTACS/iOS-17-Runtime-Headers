
@interface CNHeap : NSObject {
    NSMutableArray * _heapObjects;
    NSMutableDictionary * _heapObjectsByClassAndBinary;
    NSString * _rawDataString;
}

@property (retain) NSMutableArray *heapObjects;
@property (nonatomic, retain) NSMutableDictionary *heapObjectsByClassAndBinary;
@property (retain) NSString *rawDataString;

- (void).cxx_destruct;
- (id)heapObjects;
- (id)heapObjectsByClassAndBinary;
- (id)rawDataString;
- (void)setHeapObjects:(id)arg1;
- (void)setHeapObjectsByClassAndBinary:(id)arg1;
- (void)setRawDataString:(id)arg1;

@end
