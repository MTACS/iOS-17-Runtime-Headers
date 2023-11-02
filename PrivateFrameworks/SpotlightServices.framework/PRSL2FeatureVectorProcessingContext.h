
@interface PRSL2FeatureVectorProcessingContext : NSObject {
    unsigned long long  _expandedFeatureCount;
    unsigned short * _expandedFeatureExecutionOrder;
}

@property (nonatomic) unsigned long long expandedFeatureCount;
@property (nonatomic) unsigned short*expandedFeatureExecutionOrder;

- (void)dealloc;
- (unsigned long long)expandedFeatureCount;
- (unsigned short*)expandedFeatureExecutionOrder;
- (id)initWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
- (void)setExpandedFeatureCount:(unsigned long long)arg1;
- (void)setExpandedFeatureExecutionOrder:(unsigned short*)arg1;

@end
