
@interface ACSURLSessionUploadTask : ACSURLSessionDataTask

- (bool)_isUpload;
- (id)initWithNSURLUploadTaskCreator:(id /* block */)arg1 initialRequest:(id)arg2 forSession:(id)arg3;

@end
