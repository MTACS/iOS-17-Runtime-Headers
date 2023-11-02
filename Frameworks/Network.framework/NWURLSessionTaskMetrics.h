
@interface NWURLSessionTaskMetrics : NSURLSessionTaskMetrics {
    NSObject<OS_nw_protocol_metadata> * _clientMetadata;
}

@property (nonatomic, readonly) unsigned long long redirectCount;
@property (nonatomic, readonly, copy) NSDateInterval *taskInterval;
@property (nonatomic, readonly, copy) NSArray *transactionMetrics;

- (void).cxx_destruct;
- (bool)isKindOfClass:(Class)arg1;
- (unsigned long long)redirectCount;
- (id)taskInterval;
- (id)transactionMetrics;

@end
