
@interface NWURLSessionTaskConfiguration : NSObject {
    NSURLSessionConfiguration * _configuration;
    NSObject<OS_nw_activity> * _internalActivity;
    NSURLRequest * _request;
    NWURLSessionTask * _task;
}

- (void).cxx_destruct;

@end
