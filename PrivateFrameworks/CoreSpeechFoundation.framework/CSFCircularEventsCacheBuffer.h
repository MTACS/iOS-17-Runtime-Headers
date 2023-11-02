
@interface CSFCircularEventsCacheBuffer : NSObject {
    NSMutableArray * _eventsArray;
    long long  _lastEventIndex;
}

@property (nonatomic, readonly) NSMutableArray *eventsArray;

- (void).cxx_destruct;
- (void)addEventToCacheBuffer:(id)arg1;
- (void)clearBuffer;
- (id)eventsArray;
- (id)init;

@end
