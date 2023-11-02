
@interface GEODataURLSessionWaiter : NSObject <GEOCancellable, GEODataURLSessionTaskDelegate> {
    id /* block */  _handler;
    GEODataURLSession * _session;
    id  _strongReferenceToSelf;
    GEODataURLSessionTask * _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;
- (id)init;

@end
