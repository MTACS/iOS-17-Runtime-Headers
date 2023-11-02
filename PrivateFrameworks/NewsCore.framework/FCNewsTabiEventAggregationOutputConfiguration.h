
@interface FCNewsTabiEventAggregationOutputConfiguration : NSObject {
    NSArray * _outputNames;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSArray *outputNames;

- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOutputNames:(id)arg1;
- (id)outputNames;
- (void)setOutputNames:(id)arg1;

@end
