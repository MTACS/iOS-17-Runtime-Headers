
@interface ETDataSourceWithExtractor : NSObject <ETDataSource> {
    ETImageDescriptorExtractor * _extractor;
    <ETDataSource> * _source;
}

- (void).cxx_destruct;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1 extractor:(id)arg2;
- (int)numberOfDataPoints;

@end
