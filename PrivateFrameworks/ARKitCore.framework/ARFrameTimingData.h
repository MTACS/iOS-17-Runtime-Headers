
@interface ARFrameTimingData : NSObject {
    NSMutableDictionary * _timestampsByDataClassKey;
    double  _videoLatency;
}

@property (nonatomic, readonly) NSDictionary *timestamps;
@property (nonatomic) double videoLatency;

- (void).cxx_destruct;
- (void)addTimestamp:(double)arg1 forDataOfClass:(Class)arg2;
- (id)init;
- (void)setVideoLatency:(double)arg1;
- (id)timestamps;
- (double)videoLatency;

@end
