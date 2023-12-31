
@interface NNMKBatchedRequest : NSObject {
    NNMKProtoFetchRequest * _latestFetchRequest;
    NSMutableDictionary * _messagesToBeSentInBatch;
}

@property (nonatomic, retain) NNMKProtoFetchRequest *latestFetchRequest;
@property (nonatomic, retain) NSMutableDictionary *messagesToBeSentInBatch;

- (void).cxx_destruct;
- (id)diffFromMessages:(id)arg1 maxMessagesToAdd:(unsigned long long)arg2;
- (id)init;
- (id)latestFetchRequest;
- (id)messagesToBeSentInBatch;
- (void)setLatestFetchRequest:(id)arg1;
- (void)setMessagesToBeSentInBatch:(id)arg1;

@end
