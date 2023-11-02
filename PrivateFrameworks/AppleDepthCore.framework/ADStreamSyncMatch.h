
@interface ADStreamSyncMatch : NSObject {
    NSMutableArray * _matchedStreams;
}

@property (nonatomic, retain) NSMutableArray *matchedStreams;

- (void).cxx_destruct;
- (id)matchedObjectsForStream:(unsigned long long)arg1;
- (id)matchedStreams;
- (void)setMatchedStreams:(id)arg1;

@end
