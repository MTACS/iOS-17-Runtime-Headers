
@interface COIDSOutstandingRequestInfo : NSObject {
    NSObject<OS_nw_activity> * _activity;
    id /* block */  _callback;
    unsigned long long  _enqeueStart;
    COMeshRequest * _request;
}

@property (nonatomic, readonly) NSObject<OS_nw_activity> *activity;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic) unsigned long long enqeueStart;
@property (nonatomic, copy) COMeshRequest *request;

- (void).cxx_destruct;
- (id)activity;
- (id /* block */)callback;
- (unsigned long long)enqeueStart;
- (id)initWithRequest:(id)arg1 at:(unsigned long long)arg2 callback:(id /* block */)arg3 activity:(id)arg4;
- (id)request;
- (void)setCallback:(id /* block */)arg1;
- (void)setEnqeueStart:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;

@end
