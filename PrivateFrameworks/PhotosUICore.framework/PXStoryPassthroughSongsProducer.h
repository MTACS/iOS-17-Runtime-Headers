
@interface PXStoryPassthroughSongsProducer : NSObject <PXStorySongsProducer> {
    PXStorySongsConfiguration * _songsConfiguration;
    unsigned long long  logContext;
}

@property (nonatomic) unsigned long long logContext;
@property (nonatomic, readonly) PXStorySongsConfiguration *songsConfiguration;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSongs:(id)arg1;
- (id)initWithSongsConfiguration:(id)arg1;
- (unsigned long long)logContext;
- (id)requestSongsWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (void)setLogContext:(unsigned long long)arg1;
- (id)songsConfiguration;

@end
