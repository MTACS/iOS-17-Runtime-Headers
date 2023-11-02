
@interface ARNonSynchronousData : NSObject <ARResultData> {
    NSArray * _gatheredData;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *gatheredData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)gatheredData;
- (id)initWithGatheredData:(id)arg1 timestamp:(double)arg2;
- (id)resultDataOfClass:(Class)arg1;
- (void)setGatheredData:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
