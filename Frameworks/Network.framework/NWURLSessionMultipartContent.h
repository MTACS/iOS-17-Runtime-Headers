
@interface NWURLSessionMultipartContent : NSObject {
    bool  _complete;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_data> * _data;
    NSError * _error;
}

- (void).cxx_destruct;

@end
