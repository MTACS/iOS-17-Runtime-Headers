
@interface OspreyMessageProducer : NSObject {
    id /* block */  _serializer;
    <OspreyClientStreamingContext> * _streamingContext;
}

- (void).cxx_destruct;
- (void)finishProducing;
- (id)initWithMessageSerializer:(id /* block */)arg1 streamingContext:(id)arg2;
- (void)produceMessage:(id)arg1;
- (void)produceMessage:(id)arg1 compressed:(bool)arg2;

@end
