
@interface BRDownloadProgressProxy : NSProgress {
    NSString * _personaID;
    NSMetadataQuery * _query;
    NSOperationQueue * _queue;
}

- (void).cxx_destruct;
- (void)_queryDidReceiveUpdate:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)start;
- (void)stop;

@end
