
@interface CKVDatasetChangePublisher : BMBookmarkablePublisher {
    <BMBookmark> * _bookmark;
    CKVDataset * _dataset;
    CKVReplicatedEntityEnumerator * _enumerator;
}

@property (nonatomic, retain) <BMBookmark> *bookmark;
@property (nonatomic, retain) CKVDataset *dataset;
@property (nonatomic, retain) CKVReplicatedEntityEnumerator *enumerator;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (bool)completed;
- (id)dataset;
- (id)enumerator;
- (id)init;
- (id)initWithDataset:(id)arg1;
- (id)nextEvent;
- (void)reset;
- (void)setBookmark:(id)arg1;
- (void)setDataset:(id)arg1;
- (void)setEnumerator:(id)arg1;
- (id)startWithSubscriber:(id)arg1;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

@end
