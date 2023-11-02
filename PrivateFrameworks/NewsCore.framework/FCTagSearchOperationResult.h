
@interface FCTagSearchOperationResult : NSObject {
    FCStreamingResults * _channels;
    FCStreamingResults * _topics;
}

@property (nonatomic, retain) FCStreamingResults *channels;
@property (nonatomic, retain) FCStreamingResults *topics;

- (void).cxx_destruct;
- (id)channels;
- (void)setChannels:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;

@end
