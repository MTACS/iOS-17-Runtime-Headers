
@interface _AXMOutputRequestTask : AXMTask {
    AXMOutputRequest * _request;
}

@property (nonatomic, retain) AXMOutputRequest *request;

- (void).cxx_destruct;
- (id)request;
- (void)setRequest:(id)arg1;

@end
