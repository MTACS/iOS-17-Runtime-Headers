
@interface APPurgeableCacheEntry : NSObject {
    <APPurgeableCacheObjectP> * _object;
    double  _timestamp;
}

@property (nonatomic, retain) <APPurgeableCacheObjectP> *object;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
