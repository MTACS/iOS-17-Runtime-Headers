
@interface PXStoryExceptionThrowingSongsProducer : NSObject <PXStorySongsProducer> {
    void logContext;
}

@property (nonatomic) unsigned long long logContext;

- (id)init;
- (unsigned long long)logContext;
- (id)requestSongsWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (void)setLogContext:(unsigned long long)arg1;

@end
