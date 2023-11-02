
@interface SFRequestMessage : SFMessage {
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;

@end
