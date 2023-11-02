
@interface _SFModelDownloadRequest : NSObject {
    _TtC6Speech20ModelDownloadRequest * _modelDownloadRequest;
}

@property (nonatomic, readonly) NSProgress *progress;

- (void).cxx_destruct;
- (void)downloadWithCompletion:(id /* block */)arg1;
- (id)initWithModelDownloadRequest:(id)arg1;
- (id)progress;

@end
