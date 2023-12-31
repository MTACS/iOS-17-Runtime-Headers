
@interface _GEOMapItemHandleCacheData : NSObject {
    NSData * _data;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) unsigned long long cost;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (unsigned long long)cost;
- (id)data;
- (id)initWithTimestamp:(id)arg1 data:(id)arg2;
- (id)timestamp;

@end
