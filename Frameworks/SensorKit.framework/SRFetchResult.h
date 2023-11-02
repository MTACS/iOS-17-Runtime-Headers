
@interface SRFetchResult : NSObject <NSCopying> {
    NSDictionary * _configuration;
    NSDictionary * _metadata;
    Class  _sampleClass;
    NSData * _sampleData;
    double  _timestamp;
}

@property (retain) NSDictionary *configuration;
@property (retain) NSDictionary *metadata;
@property (readonly, copy) id sample;
@property (retain) Class sampleClass;
@property (retain) NSData *sampleData;
@property (readonly) double timestamp;

+ (void)initialize;
+ (id)new;

- (id)_sensorConfiguration;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 timestamp:(double)arg2 metadata:(id)arg3 configuration:(id)arg4 sampleClass:(Class)arg5;
- (id)metadata;
- (id)sample;
- (Class)sampleClass;
- (id)sampleData;
- (void)setConfiguration:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSampleClass:(Class)arg1;
- (void)setSampleData:(id)arg1;
- (double)timestamp;

@end
