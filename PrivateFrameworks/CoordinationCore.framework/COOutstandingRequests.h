
@interface COOutstandingRequests : NSObject {
    id /* block */  _callback;
    COStateUpdateRequest * _request;
}

@property (copy) id /* block */ callback;
@property (retain) COStateUpdateRequest *request;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)request;
- (void)setCallback:(id /* block */)arg1;
- (void)setRequest:(id)arg1;

@end
