
@interface SNOspreyChannel : OspreyChannel {
    void connectionConfiguration;
    void ospreyClientStreamingContext;
    void ospreyRequestBuilder;
}

- (void).cxx_destruct;
- (id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(id /* block */)arg2 streamingResponseHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)initWithURL:(id)arg1 configuration:(id)arg2 useCache:(bool)arg3;

@end
