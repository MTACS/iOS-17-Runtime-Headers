
@interface ISStoreServicesRequestOperation : ISOperation {
    SSRequest * _request;
}

@property (readonly) SSRequest *request;

- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (void)run;

@end
