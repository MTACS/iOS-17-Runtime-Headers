
@interface __NSCFURLSessionTaskGroup : NSObject <__NSURLSessionTaskGroupForConfiguration> {
    NSURLSessionConfiguration * _groupConfiguration_ivar;
    NSURLSession * _groupSession_ivar;
}

@property (readonly) NSURLSessionConfiguration *_groupConfiguration;
@property (readonly) NSURLSession *_groupSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_groupConfiguration;
- (id)_groupSession;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)uploadTaskWithStreamedRequest:(id)arg1;

@end
