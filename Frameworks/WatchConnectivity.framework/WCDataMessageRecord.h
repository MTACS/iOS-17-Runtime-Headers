
@interface WCDataMessageRecord : WCMessageRecord {
    id /* block */  _responseHandler;
}

@property (readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)description;
- (bool)expectsResponse;
- (id)initWithIdentifier:(id)arg1 responseHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (id /* block */)responseHandler;

@end
