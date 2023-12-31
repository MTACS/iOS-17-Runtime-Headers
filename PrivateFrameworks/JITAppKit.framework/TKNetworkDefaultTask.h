
@interface TKNetworkDefaultTask : NSObject <TKNetworkTask> {
    MCLURLDataLoaderTask * _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTask:(id)arg1;

@end
