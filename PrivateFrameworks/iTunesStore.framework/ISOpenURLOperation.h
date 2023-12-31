
@interface ISOpenURLOperation : ISOperation {
    ISOpenURLRequest * _request;
}

@property (readonly) ISOpenURLRequest *openURLRequest;

- (void).cxx_destruct;
- (id)_newSortedTargetsArray;
- (bool)_openURL:(id)arg1;
- (id)init;
- (id)initWithOpenURLRequest:(id)arg1;
- (id)openURLRequest;
- (void)run;

@end
