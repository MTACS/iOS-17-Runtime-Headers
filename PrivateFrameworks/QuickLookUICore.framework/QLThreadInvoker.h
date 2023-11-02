
@interface QLThreadInvoker : NSObject {
    NSURLConnection * _connection;
    NSData * _data;
    NSError * _error;
}

- (void).cxx_destruct;
- (void)connectionDidFailWithError:(id)arg1;
- (void)connectionDidReceiveData:(id)arg1;
- (void)connectionDidReceiveDataLengthReceived:(id)arg1;
- (id)initWithConnection:(id)arg1 data:(id)arg2 error:(id)arg3;

@end
